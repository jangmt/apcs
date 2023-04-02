// 參閱5-19頁
#include <math.h>  // 內含 fabs() 函式
#include <stdio.h>
#include <stdlib.h>  // 內含 abs() 函式

int main() {
  int x = -12;
  float y = -3.45;
  int ax = abs(x);     // 取整數絕對值
  float ay = fabs(y);  // 取浮點絕對值

  printf("|%d| = %d\n", x, ax);
  printf("|%g| = %.2f\n", y, ay);
}