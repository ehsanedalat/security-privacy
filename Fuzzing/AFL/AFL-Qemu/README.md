# AFL with qemu 

`How to:`
1. Install qemu with `cd qemu_mode && ./build_qemu_support.sh`
2. gcc stack_overflow.c
3. ./afl-fuzz -Q -i testcase_dir -o findings_dir_Q ~/Desktop/Fuzzing/MyTests/a.out