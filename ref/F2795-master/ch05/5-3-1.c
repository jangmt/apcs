// 參閱5-3頁
#include <stdio.h>
const float TAX_RATE = 1.05;  // 定義常數

int main() {
  int price = 350;
  printf("定價%d，含稅%d 元", price, (int)(price * TAX_RATE));
}