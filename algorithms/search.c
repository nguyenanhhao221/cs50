#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {

  /*  Implement linear search for numbers arrays */

  // int numbers[7] = {20, 500, 10, 5, 100, 1, 50}; /
  //
  // int n = get_int("Number: ");
  //
  // for (int i = 0; i < 7; i++) {
  //   if (numbers[i] == n) {
  //
  //     printf("Found\n");
  //     // Exit by return 0
  //
  //     return 0;
  //   }
  // }
  //
  // printf("Not found\n");
  // return 1;

  /*  Implement linear search for string array */
  string strings[6] = {"battleship", "boot",    "cannon",
                       "iron",       "thimble", "top hat"};

  string s = get_string("String: ");

  for (int i = 0; i < 6; i++) {
    // Compare string in C require this strcmp
    // It also do order compare so it return 0 here instead of true or false, 0
    // mean that string is equal
    if (strcmp(strings[i], s) == 0) {
      printf("Found\n");
      // Exit by return 0
      return 0;
    }
  }

  printf("Not found\n");
  return 1;
}
