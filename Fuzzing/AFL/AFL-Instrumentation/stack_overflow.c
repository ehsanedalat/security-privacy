// RUN: clang -O -g -fsanitize=address %t && ./a.out
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  int size,index;
  printf( "Enter a value :");
  scanf("%d %d", &size, &index);
  int stack_array[size];
  stack_array[0] = 0;
  printf("%d %d", size, index);
  return stack_array[index];  // BOOM
}
