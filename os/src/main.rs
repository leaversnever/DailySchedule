#![no_std]
#![no_main]
#![feature(llvm_asm)]
#![feature(global_asm)]
#![feature(panic_info_message)]
#[macro_use]
mod console;
mod interrupt;
mod panic;
mod sbi;

global_asm!(include_str!("./entry.asm"));

#[no_mangle]
pub extern "C" fn rust_main() -> ! {
    println!("Hello rCore-Tutorial!");
    interrupt::init();
    unsafe {
        llvm_asm!("ebreak"::::"volatile");
    };
    panic!("end of rust_main")
}
