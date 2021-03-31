

# SUPERMACROS
def supermacro(name, currentIndent):
    if name == "__IMPORT_OPENGL_SHADING":
        return \
"""
#[macro_use]
extern crate glium;

#[allow(unused_imports)]
use glium::glutin;
use crate::glutin::dpi::PhysicalSize;
"""
    if name == "__INIT_SHADERS":
        return ("\n" + currentIndent).join(
"""
let event_loop = glium::glutin::event_loop::EventLoop::new();
let cb = glutin::ContextBuilder::new();
let size = PhysicalSize {
    width: 0,
    height: 0,
};
let context = cb.build_headless(&event_loop, size).unwrap();
let context = unsafe {
    context.treat_as_current()
};
let display = glium::backend::glutin::headless::Headless::new(context).unwrap();
""".splitlines())[2:]

    if name == "pass":
        return ""

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
make_shading = lambda res, currentIndent: \
("\n" + currentIndent).join(("""
use std::fs;
let shader_contents = fs::read_to_string(""" + res["shader_path"] + """).unwrap();

let program""" + res["id"] + """ = glium::program::ComputeShader::from_source(&display, &shader_contents).unwrap();

#[repr(C)]
#[derive(Clone, Copy)]
struct Data""" + res["id"] + """ {
""" + "\t" + (',\n' + "\t").join(f'{n}: {v}' for n, v in res["buffers"]) + """
}

implement_uniform_block!(Data""" + res["id"] + """, """ + ', '.join(n for n, v in res["buffers"] if n[0] != "_") + """);

let mut """ + res["bufferName"] + """: glium::uniforms::UniformBuffer<Data""" + res["id"] + """> =
            glium::uniforms::UniformBuffer::empty(&display).unwrap();

let """ + res["exec"] + """ = |buf| program""" + res["id"] + """.execute(uniform! { MyBlock: buf }, """ + res["workgroup_count"][1:-1] + """);

""").splitlines())

