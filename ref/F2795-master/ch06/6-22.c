#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "../img/a.png";
  char *t;

  t = strtok(str, "/");
  printf("%s\n", t);
  t = strtok(NULL, "/");
  printf("%s\n", t);
}