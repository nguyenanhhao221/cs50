#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  // Instead of this we can have something like the struct below
  // string numbers[] = {"1-234", "2-3456", "3-3456"};
  // string name[] = {"Carter", "David", "John"};

  // Define the custom struct type
  typedef struct {
    string name;
    string number;
  } person;

  // Initialize
  person people[3];
  people[0].name = "Carter";
  people[0].number = "1-234";

  people[1].name = "David";
  people[1].number = "2-234";

  people[2].name = "John";
  people[2].number = "3-3456";

  string name = get_string("Name: ");
  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
