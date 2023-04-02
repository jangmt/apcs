// 參閱2-27頁
#include <stdio.h>

int main() {
  float C = 21;                // 攝氏溫度
  float F = (C * 9 / 5) + 32;  // 華氏溫度

  printf("攝氏%f度等於華氏%f度\n", C, F);
}