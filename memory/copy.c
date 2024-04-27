#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s = get_string("s: ");
  // Have to check this because get_string can also return NULL
  if (s == NULL) {
    return 1;
  }

  // Memory allocate
  char *t = malloc(strlen(s) + 1);

  // If malloc return NULL, there are not enough memory available, must get out
  if (t == NULL) {
    return 1;
  }

  // remember the nul \0
  for (int i, n = strlen(s); i <= n; i++) {
    t[i] = s[i];
  }

  // For safe access to t
  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
  };

  printf("%s\n", s);
  printf("%s\n", t);
  return 0;
}
