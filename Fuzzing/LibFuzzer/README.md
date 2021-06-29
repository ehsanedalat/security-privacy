# LibFuzzer
Link: https://llvm.org/docs/LibFuzzer.html

`How to:`

1. clang++ -g -fsanitize=address,fuzzer stack_overflow.cc

2. nano CORPUSDIR/tc-1  

3. ./a.out CORPUSDIR