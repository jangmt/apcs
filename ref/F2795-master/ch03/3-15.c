// 參閱3-15頁
#include <stdio.h>

float cirArea(int r) {
  return 3.14 * r * r;
}

int main() {
  float ans = cirArea(20);

  printf("半徑%d的圓面積：%.2f\n", 20, ans);
}