// 參閱5-18頁
#include <complex.h>  // 內含 complex 關鍵字和 csqrt() 函式
#include <stdio.h>

int main() {
  float a = 1, b = -10, c = 36;
  float complex ans = csqrt(b * b - 4 * a * c);

  printf("計算結果：%.2f%+.2fi\n", creal(ans), cimag(ans));
}