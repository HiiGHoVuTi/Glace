
import sys
sys.path.append("..")
from common.utils import Node
from rust.long_macros import *

#%%
def paintLineOn(buff, text, indent):
    buff += indent + text + "\n"
    return buff

def paint_type(typeName):

    if typeName.value == "Generic":
        base, *args = typeName.children
        base, args = paint_type(base), [paint_type(arg) for arg in args]
        if base == "Ref":
            return f"&{args[0]}"
        if base == "MutRef":
            return f"&mut {args[0]}"
        return f"{base}<{', '.join(args)}>"
    if typeName.value == "TypeCall":
        base, arg = typeName.children
        base, arg = paint_type(base), paint_type(arg)

        return f"{base}({arg})"


    # handle combos
    if typeName.value == "TypeExpr":
        op, left, right = typeName.children
        left, right = paint_type(left), paint_type(right)
        op = op.value
        left, right = (left, right) if "mut" in left else (right, left)
        if op == "*" :
            return left + " " + right
        if op == "::":
            return right + "::" + left

    if typeName.value == "FixedArray":
        type, count = typeName.children
        type = paint_type(type)
        return f"[{type} ; {paint_expression(count)}]"

    if typeName.value == "ID":
        name = typeName.children[0].value
        if name == "Int":
            return "i32"
        if name == "uSize":
            return "usize"
        if name == "Float":
            return "f32"
        if name == "String":
            return "String"
        if name == "Bool":
            return "bool"
        if name == "Mut":
            return "mut"
        if name in ["Obj", "Object"]:
            return "HashMap<&str, Box<dyn Any + 'static>>"
        return name
    if typeName.value == "RawMacroCall":
        extra = typeName.children
        macroName = extra[0].children[0].value
        macroContents = extra[1].value
        if macroName == "rust":
            return macroContents.strip()
        else:
            return f"{macroName}! {macroContents}"
    return "typeNotImplemented"

def paint_call(name, args):
    argText = ", ".join(str(paint_expression(arg)) for arg in args)
    if name == "print":
        return 'println!("{:#?}", ' + argText + ")"
    if name == "Box":
        return f"Box::new({argText})"
    if name == "Ref":
        return f"&({argText})"
    if name == "Mut":
        return f"mut ({argText})"
    if name == "MutRef":
        return f"&mut ({argText})"
    if name == "Unbox":
        return f"*({argText})"
    return f"{name}({argText})"


def paint_expression(expr, currentIndent=""):

    if expr.value == "None":
        return expr.value

    if expr.value == "String" or expr.value == "Number":
        return expr.children[0].value
    if expr.value == "ID":
        return expr.children[0].value
    if expr.value == "BinOp":
        # TODO handle Glace-specific ops
        op, left, right = expr.children
        left, right = paint_expression(left, currentIndent), paint_expression(right, currentIndent)
        op = op.value
        if op == "=":
            left = f"let {left}"
        if op == "@":
            return f"{left} {right}"
        return f"({left} {op} {right})"
    if expr.value == "Call":
        if len(expr.children) > 1:
            iden, *arg = expr.children
            if iden.value == "ID":
                name = iden[1][0][0]
                return paint_call(name, arg)
        else:
            return paint_call(expr.children[0][1][0][0], [Node("ID", [Node("", [])])])
    if expr.value == "ComplexCall":
        out = ""
        iden, *extra = expr.children
        out += str(iden[1][0][0])
        for call in extra:
            if call.value == "Parg":
                out += "(" + \
                    ", ".join(str(paint_expression(child, currentIndent))
                        for child in call.children) + ")"
            if call.value == "Aidx":
                if len(call.children) != 0:
                    out += "[" + str(paint_expression(call.children[0], currentIndent)) + "]"
                else:
                    out += "[:]"
            if call.value == "Spawn":
                out += "{ " + \
                    ", ".join(kwarg.children[0][1][0][0] + ": " + \
                        str(paint_expression(kwarg.children[1], currentIndent))
                    if len(kwarg.children) > 1 else
                        paint_expression(kwarg)
                    for kwarg in call.children ) + " }"
            if call.value == "ObjGet":
                vartype, pName = call.children[0].children
                vartype = paint_type(vartype)
                out += f'.get("{pName[1][0][0]}").unwrap().downcast_ref::<{vartype}>().unwrap()'
            if call.value == "ObjGet?":
                vartype, pName = call.children[0].children
                vartype = paint_type(vartype)
                out = "{" + object_none_checker(
                    vartype, pName, out, currentIndent
                ) + "\n" + currentIndent + "}"
            if call.value == "DGen":
                out += "::<" + paint_type(call[1][0]) + ">"
            if call.value == "Dcol":
                out += "::" + call[1][0][1][0][0]
            if call.value == "Dot":
                out += "." + call[1][0][1][0][0]
        return out

    if expr.value == "Rest":
        return ".." + paint_expression(expr.children[0])

    # Reworking this
    if expr.value == "Object":
        assigns = expr.children
        out = "{\n" + currentIndent + "\t" + "let mut object: HashMap<&str, Box<dyn Any>> = HashMap::new();" + "\n"
        for assign in assigns:
            name, value = assign.children
            if name.value == "ID":
                name = name[1][0][0]
            value = paint_expression(value, currentIndent+"\t")
            out += currentIndent + "\t" + f'object.insert("{name}", Box::new({value}));' + "\n"

        return out + currentIndent + "\t" + "object" + "\n" + currentIndent + "}"

    if expr.value == "TypedDecl":
        vartype, varname = expr.children

    if expr.value == "Function":
        default = paint_function("§§", expr, currentIndent)
        return default.split("§§")[1][3:-2].replace("\n", "\n" + currentIndent + "\t")
    
    if expr.value == "Block":
        prg = paint_program(expr.children, currentIndent+"\t")
        return "{\n" + prg + currentIndent + "}"

    if expr.value == "Vector":
        return "vec![" + \
            ", ".join(str(paint_expression(e, currentIndent)) for e in expr.children) + \
        "]"

    if expr.value == "Array":
        return "[" + \
            ", ".join(str(paint_expression(e, currentIndent)) for e in expr.children) + \
        "]"

    if expr.value == "Tuple":
        return "(" + \
            ", ".join(str(paint_expression(e, currentIndent)) for e in expr.children) + \
        ")"
    
    if expr.value == "FixedArray":
        type, count = expr.children
        return "[" + paint_type(type) + " ; " + str(paint_expression(count)) + "]"

    if expr.value == "RawMacroCall":
        name = expr.children[0][1][0][0]
        body = expr.children[1].value
        if name == "rust":
            return body
        return f"{name}! {body}"
    
    if expr.value == "Match":
        extra = expr.children
        test  = extra[0]
        match_out = f"match {paint_expression(test)} {{\n"
        conds = extra[1::3]
        props = extra[2::3]
        vals  = extra[3::3]
        for cond, prop, val in zip(conds, props, vals):
            cond, val = paint_type(cond), paint_expression(val, currentIndent + "\t")
            prop = ", ".join(paint_expression(p) for p in prop.children)
            if len(prop) > 0:
                prop = " { " + prop + " }"
            match_out = paintLineOn(match_out, f"{cond}{prop} => {val},", currentIndent + "\t")
        match_out += "}"
        return match_out

    return "exprNotImplemented"

def paint_function(name, tree, currentIndent=""):
    argument, body = tree.children

    # Normal function
    if body.value == "FunctionBody":
        argsText = ""
        bodyText = ""
        if argument.children[0].value != "None":
            argsText = ""
            for i, argument in enumerate(argument.children):
                if argument.value == "TypedDecl":
                    argName, type = argument[1][1][1][0][0], paint_type(argument.children[0])
                    if "mut" in type:
                        type = type.replace("mut ", "")
                        argName = "mut " + argName
                    argsText += f"{argName}: {type}, "
                else:
                    argsText += f"obj{i}: &{paint_type(Node('ID', [Node('Object', [])]))}, "
                    for decl in argument.children:
                        vname = decl.children[1].children[0].value
                        bodyText += currentIndent+"\t" + f"let {vname} = " + paint_expression(Node("ComplexCall", [
                            Node("ID", [Node(f"obj{i}", [])]),
                            Node("ObjGet" + ("?" if decl.value[-1] == "?" else ""), [decl])
                        ]), currentIndent+"\t") + ";\n"

            argsText = argsText[:-2]
        retType, retValue = body.children
        outputType = paint_type(retType)

        if retValue.value == "Block":
            bodyText += paint_program(retValue.children, currentIndent+"\t")
        else:
            bodyText += currentIndent + "\t" + str(paint_expression(retValue, currentIndent)) + "\n"

        outputText = f" -> {outputType}" if outputType != "Void" else ""

        pub = ""
        if len(name.split("pub_")) > 1:
            pub = "pub "
            name = name.split("pub_")[-1]

        return f"{pub}fn {name}({argsText}){outputText} " + "{" + f"\n{bodyText}{currentIndent}" + "}\n"
    # Lambda
    else:
        argsText = ""
        if argument.children[0].value != "None":
            for argument in argument.children:
                if argument.value == "TypedDecl":
                    argName, type = argument[1][1][1][0][0], paint_type(argument.children[0])
                    argsText += f"{argName}: {type}, "
                else:
                    argsText += argument.children[0][0] + ", "
            argsText = argsText[:-2]
        bodyText = compl = ""
        if body.value == "Block":
            bodyText = "{\n" + paint_program(body.children, currentIndent+"\t") + currentIndent + "}"
        else:
            bodyText = str(paint_expression(body, currentIndent))
            if bodyText[0] == '|':
                compl = " move"
                newBody = ""
                for i, e in enumerate(bodyText.splitlines()):
                    if i == 0:
                        newBody += e
                    else:
                        extraTab = "\t" if i != len(bodyText.splitlines())-1 else ""
                        newBody += "\n" + currentIndent + extraTab + e.strip()
                bodyText = newBody
        return f"let {name} = |{argsText}|{compl} {bodyText};" + "\n"


def paint_struct(name, tree, currentIndent=""):
    _, *sections = tree.children

    out = ""

    for section in sections:
        secName, *program = section.children
        if secName[1][0].value in ["data", "shader_data"]:
            if secName[1][0].value == "shader_data":
                out += currentIndent + "#[repr(C)]\n"
                out += currentIndent + "#[derive(Clone, Copy, Debug, PartialEq, Default)]\n"
            pub = ""
            if len(name.split("pub_")) > 1:
                pub = "pub "
                name = name.split("pub_")[-1]
            out += f"{pub}struct {name}" + " {\n" + currentIndent
            for decl in program:
                type, val = decl.children
                type = paint_type(type)
                fname, pub = val[1][0][0], ""
                if "pub_" in fname:
                    pub = "pub "
                    fname = fname.split("pub_")[-1]
                out += "\t" + f"{pub}{fname}: {type}," + "\n" + currentIndent
            out += "}\n" + currentIndent
            if secName[1][0].value == "shader_data":
                out += currentIndent + f"unsafe impl ocl::OclPrm for {name} {{}}" + "\n"

        if secName[1][0].value == "methods":
            out += f"impl {name}" + " {\n" + currentIndent
            for decl in program:
                funcName, func = paint_varname(decl.children)
                body = paint_function(funcName, func, currentIndent + "\t")
                out += "\t" + body\
                    .replace(f"self: mut {name}", f"&mut self")\
                    .replace(f"self: {name}", "&self")\
                    .replace("mut &self", "&mut self")\
                    .replace(f"mut self: &{name}", "&mut self")
            out += "}\n" + currentIndent
        if secName.value == "Generic":
            if secName[1][0][1][0].value == "methods":
                traitName = secName[1][1][1][0].value
                out += f"impl {traitName} for {name}" + " {\n" + currentIndent
                for decl in program:
                    if decl.value == "AutoDecl":
                        funcName, func = paint_varname(decl.children)
                        body = paint_function(funcName, func, currentIndent + "\t")
                        out += "\t" + body\
                            .replace(f"self: mut {name}", f"&mut self")\
                            .replace(f"self: {name}", "&self")\
                            .replace("mut &self", "&mut self")\
                            .replace(f"mut self: &{name}", "&mut self")
                    if decl.value == "TypedDecl":
                        newType, typeExpr = decl.children
                        newType, typeExpr = paint_type(newType), paint_type(typeExpr)
                        out += "\t" + f"type {newType} = {typeExpr};" + "\n"
                out += "}\n" + currentIndent
    return out

def paint_trait(name, tree, currentIndent=""):
    _, *sections = tree.children

    out = ""

    for section in sections:
        secName, *program = section.children
        if secName[1][0].value == "methods":
            pub = ""
            if len(name.split("pub_")) > 1:
                pub = "pub "
                name = name.split("pub_")[-1]
            out += currentIndent + f"{pub}trait {name}" + " {\n" + currentIndent
            for decl in program:
                funcName, func = paint_varname(decl.children)
                inTypes = ", ".join(f"{a[1][1][1][0][0]}: {paint_type(a[1][0])}" 
                        for a in func.children[0].children)
                outType = paint_type(func.children[1])
                body = f"fn {funcName}({inTypes}) -> {outType};".replace(" -> Void", "")
                out += "\t" + body.replace(f"self: {name}", "&self")\
                    .replace(f"self: mut {name}", "&mut self") + "\n" + currentIndent
            out += "}\n" + currentIndent

    return out

import random
def paint_shader_builder(sections, currentIndent=""):
    info = { "buffers": {}, "kernels": {}, "id": "".join(random.choice("0123456789") for _ in range(4)) }
    for sec in sections:
        name = sec.children[0].children[0].value
        for decl in sec.children[1:]:
            subname = decl.children[0].children[0].value
            if name == "data":
                info[subname] = paint_expression(decl.children[1], currentIndent)
            if name == "buffers":
                key = decl.children[0].children[0].value
                info["buffers"][key] = [None] * 2
                for assign in decl.children[1].children:
                    if assign.children[0].children[0].value == "dims":
                        info["buffers"][key][1] = paint_expression(assign.children[1], currentIndent)
                    if assign.children[0].children[0].value == "type":
                        info["buffers"][key][0] = paint_type(assign.children[1]) 
            if name == "kernels":
                info["kernels"][subname] = {}
                for assign in decl.children[1].children:
                    key = assign.children[0].children[0].value
                    info["kernels"][subname][key] = paint_expression(assign.children[1])
                info["kernels"][subname]["args"] = info["kernels"][subname]["args"][1:-1].split(", ")
    return make_shading_kernel(info, currentIndent)

def paint_shader_call(sections, currentIndent=""):
    info = { "pairs": []}
    for sec in sections:
        name = sec.children[0].children[0].value
        if name == "data":
            for decl in sec.children[1:]:
                subname = decl.children[0].children[0].value
                if subname == "pairs":
                    for arr in decl.children[1].children:
                        info[subname].append([
                            paint_expression(child)
                        for child in arr.children])
                else:
                    info[subname] = paint_expression(decl.children[1], currentIndent)
    return make_shading_call(info, currentIndent)

def paint_varname(vals):
    *arg, value = vals
    # no generics
    if len(arg) == 1:
        iden = arg[0]
        varname = iden.children[0].value
    # generics
    else:
        iden, gen = arg
        varname = iden.children[0].value + "<"
        gen = gen.children
        for i, _ in enumerate(gen[::2]):
            n = gen[i*2][1][0][0]
            v = paint_type(gen[i*2+1])
            varname += f"{n}: {v}, "
        varname = varname[:-2] + ">"
    return varname, value

#%%
def paint_program(instructions, currentIndent=""):

    out = ""
    for instr in instructions:
        name, extra = instr

        if name == "Block":
            block = "{\n" + paint_program(extra, currentIndent + "\t") + currentIndent + "};"
            out = paintLineOn(out, block, currentIndent)

        if name == "Use":
            o = ""
            for i, e in enumerate(extra):
                if i != len(extra) - 1:
                    o += e[1][0][0] + "::"
                else:
                    if len(e[1]) == 0:
                        o += "*;"
                    elif e.value == "ImPack":
                        o += "{" + ", ".join(a[1][0][0] for a in e[1]) + "};"
                    else:
                        o += e[1][0][0] + ";"
            out = paintLineOn(out, f"use {o}", "")
        if name == "ExternCrate":
            crate = extra[0].children[0].value
            out = paintLineOn(out, f"extern crate {crate};", "")
        if name == "Mod":
            crate = extra[0].children[0].value
            out = paintLineOn(out, f"mod {crate};", "")

        if name == "If":
            expr, block = extra
            expr, block = paint_expression(expr, currentIndent)[1:-1], paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
        if name == "IfElse":
            first, *rest = extra
            expr, block = paint_expression(first[1][0], currentIndent)[1:-1], paint_program(first[1][1].children, currentIndent+"\t")
            out = paintLineOn(out, f"if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
            for elseif in rest[:-1]:
                expr, block = paint_expression(elseif[1][0], currentIndent)[1:-1], paint_program(elseif[1][1].children, currentIndent+"\t")
                out = paintLineOn(out, f"else if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
            block = paint_program(rest[-1].children, currentIndent)
            out = paintLineOn(out, f"else" + "{\n" + block + currentIndent +  "}", currentIndent)

        if name == "For":
            expr, block = extra
            expr, block = paint_expression(expr, currentIndent)[1:-1], paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"for {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
        if name == "While":
            expr, block = extra
            expr, block = paint_expression(expr, currentIndent)[1:-1], paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"while {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)

        if name == "Match":
            match_out = paint_expression(instr, currentIndent)
            out = paintLineOn(out, match_out + ";", currentIndent)

        if name == "WordBlock":
            name = paint_expression(extra[0])
            block = extra[1]
            block = paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, name + " {\n" + block + currentIndent + "}", currentIndent)

        if name == "TVDecl":
            vartype, iden, value = extra
            varname = iden.children[0].value
            typeText = paint_type(vartype)
            varvalue = paint_expression(value, currentIndent)
            mods = "let"
            if "mut" in typeText:
                mods = "let mut"
                typeText = typeText.replace("mut ", "")
            if "Const" in typeText:
                mods = "const"
                typeText = typeText.replace("Const", "")
            out = paintLineOn(out, f"{mods} {varname}: {typeText} = {varvalue};".replace(": mut = ", " = ").replace(": Const = ", " = "), currentIndent)

        if name == "AutoDecl":
            varname, value = paint_varname(extra)
            if varname == "TypedDecl":
                obj = paint_expression(value)
                for decl in extra[0].children:
                    vname = decl.children[1].children[0].value
                    decl = f"let {vname} = " + paint_expression(Node("ComplexCall", [
                        Node("ID", [Node(obj, [])]),
                        Node("ObjGet" + ("?" if decl.value[-1] == "?" else ""), [decl])
                    ]), currentIndent) + ";"
                    out = paintLineOn(out, decl, currentIndent)
            elif value.value == "Function": # declare a function
                functext = paint_function(varname, value, currentIndent)
                out += currentIndent + functext
            elif value.value == "MacroCall":
                if value.children[0].children[0].value == "Struct":
                    structext = paint_struct(varname, value, currentIndent)
                    out += currentIndent + structext
                if value.children[0].children[0].value in ["Blueprint", "Trait"]:
                    traitext = paint_trait(varname, value, currentIndent)
                    out += currentIndent + traitext
            else: # use the let keyword without any typing concerns
                varvalue = paint_expression(value, currentIndent)
                out = paintLineOn(out, f"let {varname} = {varvalue};", currentIndent)
        if name == "Reassign":
            iden, value = extra
            varname = paint_expression(iden, currentIndent+"\t")
            varvalue = paint_expression(value, currentIndent+"\t")
            out = paintLineOn(out, f"{varname} = {varvalue};", currentIndent)


        if name == "Call":
            if len(extra) > 1:
                iden, *args = extra
                if iden.value == "ID":
                    name = iden.children[0].value
                    calltext = paint_call(name, args)
                    out = paintLineOn(out, f"{calltext};", currentIndent)
            else:
                out = paintLineOn(out, f"{extra[0][1][0][0]}();", currentIndent)
        if name == "ComplexCall":
            val = paint_expression(instr, currentIndent)
            out = paintLineOn(out, val + ";", currentIndent)

        if name == "Ret":
            expr = extra[0]
            exprText = paint_expression(expr, currentIndent)
            out = paintLineOn(out, f"{exprText}", currentIndent)
        if name == "Return":
            expr = extra[0]
            exprText = paint_expression(expr, currentIndent)
            out = paintLineOn(out, f"return {exprText};", currentIndent)

        if name == "MacroCall":
            if extra[0][1][0][0] == "ShaderBuilder":
                sections = extra[1:]
                text = paint_shader_builder(sections, currentIndent)
                out = paintLineOn(out, text, currentIndent)
            if extra[0][1][0][0] == "ShaderCall":
                sections = extra[1:]
                text = paint_shader_call(sections, currentIndent)
                out = paintLineOn(out, text, currentIndent) 

        if name == "RawMacroCall":
            name = extra[0][1][0][0]
            body = extra[1].value
            if name == "rust":
                out = paintLineOn(out, body, currentIndent)
            else:
                out = paintLineOn(out, f"{name}! {body};", currentIndent)

        if name == "ID":
            name = extra[0].value
            out = paintLineOn(out, supermacro(name, currentIndent), currentIndent)


        if currentIndent == "":
            out += "\n"

    return out

def paint_total(instructions):
    return paint_program(instructions)


# %%
