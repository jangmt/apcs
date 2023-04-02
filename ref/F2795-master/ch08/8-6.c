#include <stdio.h>

int main() {
  int num = 12;
  int *pt = &num;

  *pt = 47;
  printf("%d", num);
}