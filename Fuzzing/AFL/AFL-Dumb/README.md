# AFL Fuzzer
Github Link: https://github.com/google/AFL

Dumb Fuzzing with AFL:

`How to:`

1. gcc stack_overflow.c
2. ./afl-fuzz -n -i testcase_dir -o findings_dir_N ./a.out