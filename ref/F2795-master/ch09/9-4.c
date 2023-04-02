#include <stdio.h>
const char AIR_NAME[] = "冷淨";
const int AIR_ID = 1357;
float power(int, float);  // 計算功率的函式原型宣告

int main() {
  printf("品名：%s\n", AIR_NAME);
  printf("型號：%d\n", AIR_ID);
  printf("功率：%gW\n", power(220, 1.2));
}

/*
計算功率的函式本體
參數 v：整數型態電壓值
參數 i：浮點型態電流值
傳回值：浮點型態功率值
*/
float power(int v, float i) {
  return v * i;  // 功率（瓦數）= 電壓 × 電流
}