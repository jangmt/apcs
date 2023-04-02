// 參閱5-24頁
#include <stdio.h>

int main() {
  int rows = 4;  // 宣告儲存「列數」值的變數

  int num = 1;                       // 垂直列從 1 開始到指定的列數結束
  for (int i = 1; i <= rows; i++) {  // 水平行數的 j 值跟垂直的 i 值相同
    for (int j = 1; j <= i; j++) {
      printf("%d ", num);  // 數字後面加一個空格
      num++;
    }
    printf("\n");  // 每一列的結尾要換行
  }
}