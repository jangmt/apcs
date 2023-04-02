// 參閱3-13頁
#include <stdio.h>

void cirArea() {
  int r = 10;
  float area = 3.14 * r * r;
  printf("圓面積：%.2f\n", area);
}

int main() {
  cirArea();
  printf("計算完畢！\n");
}