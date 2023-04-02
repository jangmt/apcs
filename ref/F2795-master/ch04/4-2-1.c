// 參閱4-2頁
#include <stdio.h>  // 內含 printf() 及 scanf() 函式定義

int main() {
  float C, F;  // 宣告儲存攝氏和華氏溫度的變數

  printf("請輸入攝氏溫度：");
  scanf("%f", &C);

  F = (C * 9 / 5) + 32;  // 攝氏轉華氏計算公式
  printf("攝氏 %.2f = 華氏 %.2f", C, F);
}