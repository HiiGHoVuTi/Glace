
import sys
import os
sys.path.append(os.path.dirname(os.path.realpath(__file__)) + "/..")
from common.parselex import parse, lex
from rust.paint import paint_total

import sys
args = sys.argv[1:]
try:
    src, trg = args
except:
    raise NotImplementedError("Invalid CLI arguments.")

with open(src) as f:
    contents = f.read()
    out = paint_total(parse(lex(contents)))

try:
    with open(trg, "x") as f:
        pass
except:
    pass
with open(trg, "w") as f:
    f.write(out)

