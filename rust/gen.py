
import sys
import os
sys.path.append(os.path.dirname(os.path.realpath(__file__)) + "/..")
from common.parselex import parse, lex
from rust.paint import paint_total
from glacec import *
def main():
    args = sys.argv[1:]
    try:
        global src
        src, trg = args
    except:
        raise NotImplementedError("Invalid CLI arguments.")

    with open(src) as f:
        contents = f.read()
        global out
        out = paint_total(parse(lex(contents)))

    try:
        with open(trg, "x") as f:
            pass
    except:
        pass
    with open(trg, "w") as f:
        f.write(out)

    print("Do you want to compile emited resource file ?")
    comda = input()

    if comda == "y":
        print("Compiling your object to executable")
    else:
        print("oh noes do it manually")

    find('rustc.exe', 'C:\\')
    rustloc = find.result[1]

    find(trg, 'C:\\')
    print()
    rustsource = find.result[0]
    print()
    subprocess.run([rustloc, rustsource])


if __name__ == "__main__":
    main()