
#%%
from utils import Node, print_tree
from parselex import parse, lex
from paint import paint_total


#%%
to_fix = """
val = object(Obj: a)'(Int: b);
"""

tree = Node("Program", parse(lex("""
main := None => Void: {
    # console.print(a); # to fix
    add := Int: a => Int: b => Int: c => {
        ret a + b + c;
    };
    console.log(a);
    ret add(a)(b)::property.otherprop(c);
};


""")))
print_tree(tree)
print(paint_total(tree.children))

# %%
