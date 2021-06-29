 
// RUN: clang -O -g -fsanitize=address %t && ./a.out
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int testMe(int size){
  int index=10;
  //printf( "Enter a value :");
  //scanf("%d %d", &size, &index);
  int stack_array[size];
  stack_array[0] = 0;
  printf("%d %d", size, index);
  return stack_array[index];  // BOOM
}
// int main(int argc, char **argv) {
//  printf("SALAM");
// }
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {

  testMe((int)Data[0]);
  return 0;  // Non-zero return values are reserved for future use.
}

