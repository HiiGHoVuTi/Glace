
#%%
from pyparsing import *
import pyparsing
ParserElement.enablePackrat()
from utils import Node

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

    identifier = Word(alphanums)
    identifier.setParseAction(lambda x: Node("ID", pack(x)))

    literalKeyWord = Literal("None")
    literalKeyWord.setParseAction(lambda x: Node("None", []))

    literal = numberLiteral ^ quotedString ^ literalKeyWord

    #expressionAtom = Forward()
    functionExpr = Forward()
    functionCall = Forward()
    object = Forward()
    typedDeclaration = Forward()
    codeBlock = Forward()
    expressionAtom = (literal ^ identifier ^ functionExpr ^ functionCall ^ object ^ typedDeclaration ^ codeBlock)


    expression = infixNotation(expressionAtom, [
        (oneOf(["in"]), 2, opAssoc.LEFT),
        (oneOf(["==", "!=", "<", ">", "<=", ">="]), 2, opAssoc.LEFT),
        (oneOf(["*", "/", "//"]), 2, opAssoc.LEFT),
        (oneOf(["+", "-"]), 2, opAssoc.LEFT),
        (oneOf(["'", ".", "::"]), 2, opAssoc.LEFT),
        (oneOf([".."]), 2, opAssoc.LEFT),
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

    typeNotation = infixNotation(identifier, [
        (oneOf(["->"]), 2, opAssoc.LEFT),
        (oneOf(["*"]), 2, opAssoc.LEFT),
        (oneOf(["|"]), 2, opAssoc.LEFT),
    ])
    typeNotation.setParseAction(lambda x: binOP_parse("TypeExpr", x[0]))


    autoDeclaration = identifier + Literal(":=").suppress() + expression
    autoDeclaration.setParseAction(minipack("AutoDecl"))

    typedDeclaration << typeNotation + Literal(":").suppress() + identifier
    typedDeclaration.setParseAction(minipack("TypedDecl"))

    valuedDeclaration = identifier + Literal("=").suppress() + expression
    valuedDeclaration.setParseAction(minipack("ValDecl"))

    typedAndValuedDeclaration = typeNotation + Literal(":").suppress() + identifier + \
            Literal("=").suppress() + expression
    typedAndValuedDeclaration.setParseAction(minipack("TVDecl"))

    reassignment = identifier + Literal("<-").suppress() + expression
    reassignment.setParseAction(minipack("Reassign"))

    declaration = autoDeclaration ^ typedAndValuedDeclaration ^ typedDeclaration ^ valuedDeclaration ^ reassignment

    objAssign = identifier + Literal("<-").suppress() + expression + Optional(Literal(",")).suppress()
    objAssign.setParseAction(minipack("ObjAssign"))
    object << Literal("{").suppress() + ZeroOrMore(objAssign) + Literal("}").suppress()
    object.setParseAction(minipack("Object"))

    codeBlock << Literal("{").suppress() + Program + Literal("}").suppress()
    codeBlock.setParseAction(minipack("Block"))

    ifStatement = Literal("if").suppress() + expression + codeBlock
    ifStatement.setParseAction(minipack("If"))
    forStatement = Literal("for").suppress() + expression + codeBlock
    forStatement.setParseAction(minipack("For"))

    controlFlow = ifStatement ^ forStatement

    argument = (typedDeclaration ^ literal ^ identifier)
    argument.setParseAction(minipack("Argument"))
    funcBody = typeNotation + Literal(":").suppress() + (expression ^ codeBlock)
    funcBody.setParseAction(minipack("FunctionBody"))
    functionExpr << argument + Literal("=>").suppress() + (expression ^ codeBlock ^ funcBody)
    functionExpr.setParseAction(minipack("Function"))

    simpleCall = identifier + Literal("(").suppress() + expression + Literal(")").suppress()
    simpleCall.setParseAction(minipack("Call"))
    complexCall = identifier + OneOrMore(
        (Literal("(").suppress() + expression + Literal(")").suppress()).setParseAction(minipack("Parg")) ^\
        (Literal(".").suppress() + identifier).setParseAction(minipack("Dot")) ^\
        (Literal("::").suppress() + identifier).setParseAction(minipack("Dcol"))
    )
    complexCall.setParseAction(minipack("ComplexCall"))
    functionCall << (simpleCall ^ complexCall)

    returnStatement = Literal("return").suppress() + expression
    returnStatement.setParseAction(minipack("Return"))
    retStatement = Literal("ret").suppress() + expression
    retStatement.setParseAction(minipack("Ret"))
    controlStatement = returnStatement ^ retStatement

    line = (declaration ^ expression ^ controlStatement ^ controlFlow) + Literal(";").suppress()
    Program << OneOrMore(line) ^ empty

    return Program.parseString(text)