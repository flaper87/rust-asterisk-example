#![crate_type = "dylib"]
#![no_std]
#![allow(ctypes)]
#![feature(link_args)]


extern "rust-intrinsic" {
    pub fn transmute<T,U>(val: T) -> U;
    pub fn size_of<T>() -> uint;
}

#[no_mangle]
pub extern fn load_module() -> int {0}

#[no_mangle]
pub extern fn reload_module() -> int {0}

#[no_mangle]
pub extern fn unload_module() -> int {0}


