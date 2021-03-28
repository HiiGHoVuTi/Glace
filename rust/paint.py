
import sys
sys.path.append("..")
from common.utils import Node

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

    # handle combos
    if typeName.value == "TypeExpr":
        op, left, right = typeName.children
        left, right = paint_type(left), paint_type(right)
        op = op.value
        left, right = (left, right) if "mut" in left else (right, left)
        if op == "*" :
            return left + " " + right

    if typeName.value == "FixedArray":
        type, count = typeName.children
        type = paint_type(type)
        return f"[{type} ; {count[1][0][0]}]"

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
        if op.value == "=":
            left = f"let {left}"
        return f"{left} {op.value} {right}"
    if expr.value == "Call":
        if len(expr.children) > 1:
            iden, *arg = expr.children
            if iden.value == "ID":
                name = iden[1][0][0]
                return paint_call(name, arg)
        else:
            return paint_call(expr.children[0][1][0][0], Node("ID", [Node("", [])]))
    if expr.value == "ComplexCall":
        out = ""
        iden, *extra = expr.children
        out += iden[1][0][0]
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
                        for kwarg in call.children) + " }"
            if call.value == "ObjGet":
                vartype, pName = call.children[0].children
                vartype = paint_type(vartype)
                out += f'.get("{pName[1][0][0]}").unwrap().downcast_ref::<{vartype}>().unwrap()'
            if call.value == "ObjGet?":
                vartype, pName = call.children[0].children
                vartype = paint_type(vartype)
                out = "{" + ("\n" + currentIndent + "\t").join(
f"""
let mut out: Option<&{vartype}> = None;
let entry = ({out}).get("{pName[1][0][0]}");
if let Some(pointer) = entry {{
    out = pointer.downcast_ref::<{vartype}>();
}}
out
""".splitlines()
                ) + "\n" + currentIndent + "}"
            if call.value == "Dcol":
                out += "::" + call[1][0][1][0][0]
            if call.value == "Dot":
                out += "." + call[1][0][1][0][0]
        return out

    # Reworking this
    if expr.value == "Object":
        assigns = expr.children
        out = "{\n" + currentIndent + "\t" + "let mut object: HashMap<&str, Box<dyn Any + 'static>> = HashMap::new();" + "\n"
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
    
    if expr.value == "FixedArray":
        type, count = expr.children
        return "[" + paint_type(type) + " ; " + str(paint_expression(count)) + "]"

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
        if secName[1][0].value == "data":
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
        if secName[1][0].value == "methods":
            out += f"impl {name}" + " {\n" + currentIndent
            for decl in program:
                funcName, func = paint_varname(decl.children)
                body = paint_function(funcName, func, currentIndent + "\t")
                out += "\t" + body.replace(f"self: {name}", "&self")\
                    .replace(f"self: mut {name}", f"&mut self")
            out += "}\n" + currentIndent
        if secName.value == "Generic":
            if secName[1][0][1][0].value == "methods":
                traitName = secName[1][1][1][0].value
                out += f"impl {traitName} for {name}" + " {\n" + currentIndent
                for decl in program:
                    funcName, func = paint_varname(decl.children)
                    body = paint_function(funcName, func, currentIndent + "\t")
                    out += "\t" + body.replace(f"self: {name}", "&self")\
                        .replace(f"self: mut {name}", "&mut self")
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
            expr, block = paint_expression(expr, currentIndent), paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
        if name == "IfElse":
            first, *rest = extra
            expr, block = paint_expression(first[1][0], currentIndent), paint_program(first[1][1].children, currentIndent+"\t")
            out = paintLineOn(out, f"if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
            for elseif in rest[:-1]:
                expr, block = paint_expression(elseif[1][0], currentIndent), paint_program(elseif[1][1].children, currentIndent+"\t")
                out = paintLineOn(out, f"else if {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
            block = paint_program(rest[-1].children)
            out = paintLineOn(out, f"else" + "{\n" + block + currentIndent +  "}", currentIndent)

        if name == "For":
            expr, block = extra
            expr, block = paint_expression(expr, currentIndent), paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"for {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
        if name == "while":
            expr, block = extra
            expr, block = paint_expression(expr, currentIndent), paint_program(block.children, currentIndent+"\t")
            out = paintLineOn(out, f"while {expr} " + "{\n" + block + currentIndent +  "}", currentIndent)
        
        if name == "TVDecl":
            vartype, iden, value = extra
            varname = iden.children[0].value
            typeText = paint_type(vartype)
            varvalue = paint_expression(value, currentIndent)
            mods = ""
            if "mut" in typeText:
                mods = "mut"
                typeText = typeText.replace("mut ", "")
            out = paintLineOn(out, f"let {mods}{' ' if mods!='' else ''}{varname}: {typeText} = {varvalue};", currentIndent)

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
            varname = iden.children[0].children[0].value
            for extra in iden.children[1:]:
                varname += "." + extra.children[0].value
            varvalue = paint_expression(value)
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

        if currentIndent == "":
            out += "\n"

    return out

def paint_total(instructions):
    return """
use std::collections::HashMap;
use std::any::Any;

""" + paint_program(instructions)


# %%
