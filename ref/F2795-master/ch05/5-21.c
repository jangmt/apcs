// 參閱5-21頁
#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, D;    // 方程式的係數、常數和判別式
  float root1, root2;  // 公式的解，兩個根
  float real, imag;    // 實數和虛數

  printf("請輸入二次方程式的常數。\n");
  printf("a = ");
  scanf("%f", &a);
  printf("b = ");
  scanf("%f", &b);
  printf("c = ");
  scanf("%f", &c);

  D = b * b - 4 * a * c;
  if (D > 0) {
    root1 = (-b + sqrt(D)) / (2 * a);  // 求解
    root2 = (-b - sqrt(D)) / (2 * a);
    printf("二次方程式的解：x = %.2f, %.2f\n", root1, root2);
  } else if (D == 0) {
    root1 = root2 = -b / (2 * a);
    printf("二次方程式的解：x = %.2f, %.2f\n", root1, root2);
  } else {
    real = -b / (2 * a);
    imag = sqrt(-D) / (2 * a);
    printf("二次方程式的解：%.2f+%.2fi, %.2f-%.2fi\n", real, imag, real, imag);
  }
}