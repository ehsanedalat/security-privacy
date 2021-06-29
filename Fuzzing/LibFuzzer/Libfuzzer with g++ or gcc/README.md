# LibFuzzer with g++
Link: https://github.com/google/clusterfuzz/issues/920

`How to:`

1. Download and unpack the libFuzzer source archive
[libfuzzer.zip](./libfuzzer.zip) I've prepared.

2. Run the build script to build libFuzzer:

`$ cd fuzzer`
`$ bash ./build.sh`  

3. Build the example fuzzer using gcc/g++ and link against libFuzzer:

`$ g++ -fsanitize=address -fsanitize-coverage=trace-pc stack_overflow.cc /path/to/libFuzzer.a -o fuzzer -lpthread`

4. ./fuzzer CORPUSDIR