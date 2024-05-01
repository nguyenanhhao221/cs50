#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int number;
  struct node *next;
} node;

int main(int argc, char *argv[]) {
  node *list = NULL;

  for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]);
    printf("%i\n", number);

    node *n = malloc(sizeof(node));
    if (n == NULL) {
      // Free memory thus far
      return 1;
    }
    n->number = number;
    n->next = list;
    list = n;
  }

  // Print whole List
  node *prt = list;

  while (prt != NULL) {
    printf("%i\n", prt->number);
    prt = prt->next;
  }
  return 0;
}
