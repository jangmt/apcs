// 參閱5-17頁
#include <math.h>
#include <stdio.h>

int main() {
  float r, v;  // 半徑（radius）和體積（volume）

  printf("請輸入圓球半徑：");
  scanf("%f", &r);

  v = (4.0 / 3) * M_PI * r * r * r;  // 計算圓球體積
  printf("圓球的體積 V = %.2f\n", v);
}