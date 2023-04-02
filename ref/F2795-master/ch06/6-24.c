#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "n=2a+3b-c";
  char delimiter[] = "=+-";
  char *t;

  t = strtok(str, delimiter);
  while (t != NULL) {
    printf("%s\n", t);
    t = strtok(NULL, delimiter);
  }
}