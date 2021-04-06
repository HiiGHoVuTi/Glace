

# SUPERMACROS
def supermacro(name, currentIndent):
    if name == "__IMPORT_OCL_SHADING":
        return \
"""
use std::fs;
extern crate ocl;
use ocl::ProQue;
"""
    if name == "pass":
        return ""
    if name in ["break", "continue"]:
        return name + ";"

    return "UNKNOWN MACRO: " + name


# OBJECTS

object_none_checker = lambda vartype, pName, out, currentIndent: \
("\n" + currentIndent + "\t").join(
f"""
let mut out: Option<&{vartype}> = None;
let entry = ({out}).get("{pName[1][0][0]}");
if let Some(pointer) = entry {{
    out = pointer.downcast_ref::<{vartype}>();
}}
out
""".splitlines())


# SHADING
make_shading_kernel = lambda info, currentIndent: ("\n" + currentIndent).join(("""
let shader_contents = fs::read_to_string(""" + info["source"] + """).unwrap();

let pro_que""" + info["id"] + """ = ProQue::builder()
\t.src(shader_contents)
\t.dims(""" + info["dims"] + """)
\t.build().unwrap();
""" + ("\n" + currentIndent).join([f"""
let {name} = ocl::Buffer::<{type}>::builder()
\t.queue(pro_que{info['id']}.queue().clone())
\t.flags(ocl::flags::MEM_READ_WRITE)
\t.len({dims})
\t.build().unwrap();
""" for name, (type, dims) in info["buffers"].items()]) + """
""" + ("\n").join([f"""
let {name} = pro_que""" + info["id"] + f""".kernel_builder({traits["name"]})
""" + ("\n").join(["\t" + f""".arg(&{arg})""" for arg in traits["args"]]) + """
\t.build().unwrap();
""" for name, traits in info["kernels"].items()]) + """
""").splitlines())

make_shading_call = lambda info, currentIndent: ("\n" + currentIndent).join(("""
""" + ("").join([f"""
{b}.write(&{v}).enq().unwrap();""" for b, v in info["pairs"]]) + """

unsafe { """ + info["kernel"] + """.enq().unwrap(); }
""" +  ("").join([f"""
{b}.read(&mut {v}).enq().unwrap();""" for b, v in info["pairs"]])).splitlines())
