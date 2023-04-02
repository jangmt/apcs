// 參閱2-28頁
#include <stdio.h>

int main() {
  float C = 21;                // 攝氏溫度
  float F = (C * 9 / 5) + 32;  // 華氏溫度
  float num = 4.2 * 4;
  // double C = 21;          // 攝氏溫度
  // double F = (C*9/5)+32;  // 華氏溫度
  // double num = 4.2*4;

  printf("4.2*4的答案：%g\n", num);
  printf("攝氏%g度等於華氏%g度\n", C, F);
  printf("華氏溫度原始值：%f\n", F);
  // printf("4.2*4的答案：%lf\n", num);
  // printf("攝氏%lf度等於華氏%lf度\n", C, F);
}