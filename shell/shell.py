import cmd2
import string, sys
import os
from cmd2 import with_argparser
sys.path.append(os.path.dirname(os.path.realpath(__file__)) + "/..")
from common.parselex import parse, lex
from rust.paint import paint_total
import argparse
import time
import progressbar
import subprocess


argparser = argparse.ArgumentParser()
argparser.add_argument('-i', '--input', help='Name of Glace file to be transpiled')
argparser.add_argument('-o', '--output', help='Name of transpiled Glasce to Rust resource file')
argparser.add_argument('-r', '--resource', action='store_true', help='Set this flag to emit resource file instead of compiling Glace IR')
argparser.add_argument('-e', '--evaluate', action='store_true', help='Evaluate the Glace code in virtual environment')



class GLS(cmd2.Cmd):
    """Glace shell environment"""
    @with_argparser(argparser, with_unknown_args=True)
    def do_Glace(self, inpute, output, resource=False, evaluate=False):
        """Glace code generation/compilation command. Heavily WIP"""

        with open(inpute.input) as f:
            contents = f.read()
            global out
            out = paint_total(parse(lex(contents)))

        try:
            with open(inpute.output, "x") as f:
                pass
        except:
            pass
                
        if(inpute.evaluate == True):
            with open(inpute.output, "w") as f:
                f.write(out)
            glaceE = subprocess.Popen(['cargo-eval', inpute.output])
            #outputE = glaceE.stdout.read()
            outputE = glaceE.communicate()
            print(outputE)
            
        else:
            if(inpute.resource == False):
                with open(inpute.output, "w") as f:
                    f.write(out)   
                subprocess.run(["rustc", inpute.output])                    
            else:
                with open(inpute.output, "w") as f:
                    f.write(out)
    
          


if __name__ == '__main__':
    g = GLS()
    sys.exit(g.cmdloop())