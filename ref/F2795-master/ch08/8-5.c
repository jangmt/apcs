#include <stdio.h>

int main() {
  void *pt;
  int n = 345;
  char c = '@';

  pt = &n;
  printf("整數值：%d\n", *((int *)pt));
  pt = &c;
  printf("字元值：%c\n", *(char *)pt);
}