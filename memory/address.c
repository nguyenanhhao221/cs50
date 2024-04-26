#include <stdio.h>

int main(void) {
  int n = 50;

  int *p = &n;
  // Print the memory address
  printf("%p, n", p);

  // From the memory address, go to where it point and show me the value
  printf("%i, n", *p);
  return 0;
}
