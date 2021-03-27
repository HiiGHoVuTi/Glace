
#%%
from pyparsing import *
import pyparsing
ParserElement.enablePackrat(cache_size_limit=1024)
import sys
sys.path.append("..")
from common.utils import Node

#%%
def lex(raw):
    lexed = ""
    for line in raw.splitlines():
        if len(line.strip()) == 0: continue
        lexed += "\n" + line.split("#")[0]
    return lexed

#%%
def parse(text):

    minipack = lambda n: lambda x: Node(n, list(x))
    pack = lambda x: [Node(a, []) for a in x]

    Program = Forward()

    numberLiteral = pyparsing_common.number
    numberLiteral.setParseAction(lambda x: Node("Number", pack(x)))

    stringLiteral = quotedString
    stringLiteral.setParseAction(lambda x: Node("String", pack(x)))

    boolLiteral = oneOf(["true", "false"])
    boolLiteral.setParseAction(lambda x: Node("Bool", pack(x)))

    identifier = Word(alphanums + "_")
    identifier.setParseAction(lambda x: Node("ID", pack(x)))

    literalKeyWord = Literal("None")
    literalKeyWord.setParseAction(lambda x: Node("None", []))

    literal = numberLiteral ^ quotedString ^ literalKeyWord

    #expressionAtom = Forward()
    functionExpr = Forward()
    functionCall = Forward()
    object = Forward()
    typedDeclaration = Forward()
    vector = Forward()
    array = Forward()
    fixedArray = Forward()
    codeBlock = Forward()
    macro = Forward()
    expressionAtom = (literal ^ identifier ^ functionExpr ^ \
        functionCall ^ object ^ typedDeclaration ^ codeBlock ^ \
        vector ^ array ^ fixedArray ^ macro)


    expression = infixNotation(expressionAtom, [
        (oneOf([".", "::"]), 2, opAssoc.LEFT),
        (oneOf(["as"]), 2, opAssoc.LEFT),
        (oneOf([".."]), 2, opAssoc.LEFT),
        (oneOf(["*", "/", "//"]), 2, opAssoc.LEFT),
        (oneOf(["+", "-"]), 2, opAssoc.LEFT),
        (oneOf(["%"]), 2, opAssoc.LEFT),
        (oneOf(["==", "!=", "<", ">", "<=", ">="]), 2, opAssoc.LEFT),
        (oneOf(["in", "="]), 2, opAssoc.LEFT),
        (oneOf(["&&", "||"]), 2, opAssoc.LEFT),
    ])
    def binOP_parse(name, arr):
        def force(a):
            return a if isinstance(a, Node) else to_nodes(a)
        def to_nodes(x):
            if isinstance(x, Node): return x
            val = force(x[0])
            nxt = [val, to_nodes(x[2:])] if len(x[2:]) > 1 else [val, force(x[2])]
            return Node(name, children=[Node(x[1], []), *nxt])
        return to_nodes(arr)
    expression.setParseAction(lambda x: binOP_parse("BinOp", x[0]))


    # expressionAtom << functionExpr
    generic = Forward()
    typeNotation = infixNotation(identifier ^ generic ^ fixedArray, [
        (oneOf(["->"]), 2, opAssoc.LEFT),
        (oneOf(["*"]), 2, opAssoc.LEFT),
        (oneOf(["|"]), 2, opAssoc.LEFT),
    ])
    typeNotation.setParseAction(lambda x: binOP_parse("TypeExpr", x[0]))

    generic << (identifier + Literal("{").suppress() +\
        delimitedList(typeNotation) + Literal("}").suppress()).setParseAction(minipack("Generic"))

    varGeneric = (Literal("{").suppress() + delimitedList((identifier + \
        Literal(":").suppress() + identifier)) + Literal("}").suppress())\
        .setParseAction(minipack("VarGeneric"))

    destr = Forward()

    autoDeclaration = (identifier ^ destr) + Optional(varGeneric) + Literal(":=").suppress() + expression
    autoDeclaration.setParseAction(minipack("AutoDecl"))

    typedDeclaration << typeNotation + Literal(":").suppress() + identifier
    typedDeclaration.setParseAction(minipack("TypedDecl"))

    valuedDeclaration = identifier + Literal("=").suppress() + expression
    valuedDeclaration.setParseAction(minipack("ValDecl"))

    typedAndValuedDeclaration = typeNotation + Literal(":").suppress() + identifier + \
            Literal("=").suppress() + expression
    typedAndValuedDeclaration.setParseAction(minipack("TVDecl"))

    reassignment = (identifier + ZeroOrMore(Literal(".").suppress() + identifier)).setParseAction(minipack("CID")) +\
        Literal("<-").suppress() + expression
    reassignment.setParseAction(minipack("Reassign"))

    declaration = autoDeclaration ^ typedAndValuedDeclaration ^ typedDeclaration ^ valuedDeclaration ^ reassignment

    objAssign = identifier + Literal("<-").suppress() + expression + Optional(Literal(",")).suppress()
    objAssign.setParseAction(minipack("ObjAssign"))
    object << Literal("{").suppress() + ZeroOrMore(objAssign) + Literal("}").suppress()
    object.setParseAction(minipack("Object"))

    vector << Literal("(<").suppress() + delimitedList(expression) + Literal(">)").suppress()
    vector.setParseAction(minipack("Vector"))

    array << Literal("[").suppress() + delimitedList(expression) + Literal("]").suppress()
    array.setParseAction(minipack("Array"))

    fixedArray << Literal("[").suppress() + typeNotation + Literal(";").suppress() + expression + Literal("]").suppress()
    fixedArray.setParseAction(minipack("FixedArray"))

    codeBlock << Literal("{").suppress() + Program + Literal("}").suppress()
    codeBlock.setParseAction(minipack("Block"))

    macro << identifier + Literal("!").suppress() + Literal("{").suppress() + OneOrMore(
        (Literal("[").suppress() + typeNotation + Literal("]").suppress() +\
        Program).setParseAction(minipack("MacroSection"))
    ) + Literal("}").suppress()
    macro.setParseAction(minipack("MacroCall"))

    ifStatement = Literal("if").suppress() + expression + codeBlock
    ifStatement.setParseAction(minipack("If"))
    forStatement = Literal("for").suppress() + expression + codeBlock
    forStatement.setParseAction(minipack("For"))
    whileStatement = Literal("while").suppress() + expression + codeBlock
    whileStatement.setParseAction(minipack("while"))

    controlFlow = ifStatement ^ forStatement ^ whileStatement

    destr << Literal("{").suppress() + delimitedList(typedDeclaration ^ destr) + Literal("}").suppress()
    destr.setParseAction(minipack("ObjDestr"))

    argument = delimitedList(typedDeclaration ^ literal ^ identifier ^ destr)
    argument.setParseAction(minipack("Argument"))
    funcBody = typeNotation + Literal(":").suppress() + (expression ^ codeBlock)
    funcBody.setParseAction(minipack("FunctionBody"))
    functionExpr << argument + Literal("=>").suppress() + (expression ^ codeBlock ^ funcBody)
    functionExpr.setParseAction(minipack("Function"))

    simpleCall = identifier + Literal("(").suppress() + Optional(delimitedList(expression)) + Literal(")").suppress()
    simpleCall.setParseAction(minipack("Call"))
    complexCall = (identifier ^ literal) + OneOrMore(
        (Literal("(").suppress() + Optional(delimitedList(expression)) + Literal(")").suppress()).setParseAction(minipack("Parg")) ^\
        (Literal(".").suppress() + identifier).setParseAction(minipack("Dot")) ^\
        (Literal("::").suppress() + identifier).setParseAction(minipack("Dcol")) ^\
        (Literal("{").suppress() + delimitedList((identifier + Literal(":").suppress() + expression
            ).setParseAction(minipack("Kwarg"))) + Literal("}").suppress()).setParseAction(minipack("Spawn")) ^\
        (Literal("[").suppress() + Optional(delimitedList(expression)) + Literal("]").suppress()).setParseAction(minipack("Aidx")) ^\
        (Literal("'").suppress() + Literal("(").suppress() + typedDeclaration + Literal(")").suppress()).setParseAction(minipack("ObjGet")) ^\
        (Literal("?").suppress() + Literal("(").suppress() + typedDeclaration + Literal(")").suppress()).setParseAction(minipack("ObjGet?")) 
    )
    complexCall.setParseAction(minipack("ComplexCall"))
    functionCall << (simpleCall ^ complexCall)

    returnStatement = Literal("return").suppress() + expression
    returnStatement.setParseAction(minipack("Return"))
    retStatement = Literal("ret").suppress() + expression
    retStatement.setParseAction(minipack("Ret"))
    controlStatement = returnStatement ^ retStatement

    externCrate = Literal("extern").suppress() + Literal("crate").suppress() + identifier
    externCrate.setParseAction(minipack("ExternCrate"))
    mod = Literal("mod").suppress() + identifier
    mod.setParseAction(minipack("Mod"))
    useStatement = Literal("use").suppress() + ZeroOrMore(
        identifier + Literal("::").suppress()
    ) + (identifier ^ (Literal("{").suppress() + delimitedList(identifier).setParseAction(minipack("ImPack")) + Literal("}").suppress()) ^ Literal("*").setParseAction(lambda x: Node("*", [])))
    useStatement.setParseAction(minipack("Use"))
    topLevel = useStatement ^ externCrate ^ mod

    line = (declaration ^ expression ^ controlStatement ^ controlFlow ^ topLevel) + Literal(";").suppress()
    Program << OneOrMore(line) ^ empty

    return Program.parseString(text)

# %%
