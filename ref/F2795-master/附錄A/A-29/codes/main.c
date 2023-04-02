#include <math.h>  // 內含 sqrt() 函式
#include <stdio.h>

#include "myfun.h"  // 引用自訂的標頭檔，未指出 "include" 路徑

int main() {
  float t = tria(3.0, 8.0);
  printf("三角形面積 = %g\n", t);

  int q = cube(5);
  printf("5 的三次方 = %d\n", q);

  float a = 3, b = 12, c = 9;
  float ans = sqrt(b * b - 4 * a * c);
  printf("計算結果：%.2f\n", ans);
}