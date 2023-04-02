#include <stdio.h>

int main() {
  int num = 18;
  int *pt = &num;

  printf("num所在位址：%p，內容：%d\n", pt, *pt);
}