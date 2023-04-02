// 參閱3-3頁
#include <stdio.h>

int main() {
  int n = 123;

  printf("int佔%ld位元組\n", sizeof(n));
  printf("short佔%ld位元組\n", sizeof(short));
  printf("long佔%ld位元組\n", sizeof(long));
}