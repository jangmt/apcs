// 參閱3-19頁
#include <stdio.h>

int ans = 0;
void area(int w, int h) {
  ans = w * h;
}

int main() {
  area(6, 3);
  printf("面積：%d\n", ans);
}