#include <stdio.h>

void msg(char **dpt) {
  printf("%s\n", *dpt);
}

int main() {
  char *txt = "cat";
  printf("%s\n", txt);
  msg(&txt);
}