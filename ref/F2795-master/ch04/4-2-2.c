// 參閱4-2頁
#include <stdio.h>  // 內含 printf() 及 scanf() 函式定義

int main() {
  int w, h;  // 宣告儲存寬、高的整數型態變數

  printf("請輸入長方形的寬和高：\n");
  scanf("%d %d", &w, &h);  // 讀取兩個整數型態資料
  printf("面積：%d\n", w * h);
}