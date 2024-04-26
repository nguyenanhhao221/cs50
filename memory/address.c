#include <stdio.h>

int main(void) {
  int n = 50;

  int *p = &n;
  // Print the memory address
  printf("The value of p is: %p\n", p);

  // From the memory address, go to where it point and show me the value
  printf("The value of *p is:%i\n", *p);

  // Actually implementation of string in C without cs50 library
  char *s = "HI!";

  printf("The string is: %s\n", s);
}
