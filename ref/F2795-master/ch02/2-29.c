// 參閱2-29頁
#include <stdio.h>

int main() {
  //   float h = 161 / 100;  // 161 公分
  float h = (float)161 / 100;  // 161 公分
  float w = 45;                // 45 公斤
  float BMI = w / (h * h);

  printf("BMI= %.2f\n", BMI);
}