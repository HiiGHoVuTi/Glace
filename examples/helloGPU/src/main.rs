use std::fs;
extern crate ocl;
use ocl::ProQue;


fn main() {
	
	let shader_contents = fs::read_to_string("shaders/main.comp").unwrap();
	
	let pro_que4171 = ProQue::builder()
		.src(shader_contents)
		.dims([(1 << 5), (1 << 5)])
		.build().unwrap();
	
	let buffer = pro_que4171.create_buffer::<f32>().unwrap();
	
	
	let add_kernel = pro_que4171.kernel_builder("add")
		.arg(&buffer)
		.arg(&(10.0 as f32))
		.build().unwrap();
	
	let range = (0 .. 1024);
	let mut vec: Vec<f32> = range.map(|x| (x as f32)).collect();
	for v in vec.iter_mut() {
		*v = (0.0 as f32);
	}
	
	unsafe { add_kernel.enq().unwrap(); }
	buffer.read(&mut vec).enq().unwrap();
	
	println!("{:#?}", vec[0]);
}


