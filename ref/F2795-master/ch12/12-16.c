#include <stdio.h>

void msg(char **dpt) {
  printf("%s\n", *dpt);
  *dpt = "dog";
}

int main() {
  char *txt = "cat";
  msg(&txt);
  printf("%s\n", txt);
}