// 參閱3-21頁
#include <stdio.h>

void count() {
  static int t = 0;
  printf("%d次\n", ++t);
}

int main() {
  count();
  count();
  count();
}