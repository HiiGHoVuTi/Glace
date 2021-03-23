#%%
from collections import namedtuple

Node = namedtuple("Node", ["value", "children"])

def print_tree(node, tab="", print_first_branch=True):
    print (tab + (u"┗━ " if print_first_branch else "") + str(node.value))
    for child in node.children:
        print_tree(child, tab + "    ")

def printurn(x):
    print(x)
    return x