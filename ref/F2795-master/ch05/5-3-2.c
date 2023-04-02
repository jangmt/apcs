// 參閱5-3頁
#include <stdio.h>
#define TAX_RATE 1.05  // 定義 TAX_RATE

int main() {
  int price = 350;
  printf("定價%d，含稅%d 元", price, (int)(price * TAX_RATE));
}