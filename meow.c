// Copyright (c) 2024 Hao Nguyen. All Rights Reserved.
#include <stdio.h>

void meow(int n);

int main(void) { meow(3); }

void meow(int n) {
  for (int i = 0; i < n; i++) {
    printf("meow \n");
  }
}
