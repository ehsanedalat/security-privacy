github link for `sanitizers`: https://github.com/google/sanitizers

github link for `radamsa`: https://github.com/aoh/radamsa

`How To:`

1. Compile the code with ASAN switch: `clang -O -g -fsanitize=address stack_overflow.c`
2. Install Radamsa
3. Make Sample testcase: `echo 100>./testCases/sample-1`
4. Run `./fuzz_with_radamsa.sh`
