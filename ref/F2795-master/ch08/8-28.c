#include <stdio.h>

int main() {
  int n;
  printf("請輸入列數：");
  scanf("%d", &n);
  printf("2 項式列表：\n");

  int coef[n][n];  // 宣告n × n大小的陣列

  for (int i = 0; i < n; i++) {     // 垂直列
    for (int j = 0; j <= i; j++) {  // 水平行
      if (j == 0 || j == i)
        coef[i][j] = 1;
      else
        coef[i][j] = coef[i - 1][j - 1] + coef[i - 1][j];
      printf("%d ", coef[i][j]);  // 顯示數字
    }
    printf("\n");  // 換行
  }
}