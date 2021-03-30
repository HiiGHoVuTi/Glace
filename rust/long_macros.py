

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
