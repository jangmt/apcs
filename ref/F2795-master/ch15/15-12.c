#include <stdio.h>
// 取較大值的巨集指令
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int knapsack(int c, int w[], int v[], int n) {
  int k[n + 1][c + 1];  // 宣告表格 k
  int i, j;             // 表格的索引

  for (i = 0; i <= n; i++) {  // 開始填表
    for (j = 0; j <= c; j++) {
      if (i == 0 || j == 0)
        k[i][j] = 0;
      else if (w[i - 1] > j)
        k[i][j] = k[i - 1][j];
      else
        k[i][j] = MAX(k[i - 1][j], v[i - 1] + k[i - 1][j - w[i - 1]]);
    }
  }

  return k[n][c];
}

int main() {
  int w[] = {3, 4, 5, 6};  // 物件的重量
  int v[] = {1, 2, 4, 3};  // 物件的價值
  int c = 8;               // 背包承重

  int n = sizeof(w) / sizeof(w[0]);
  printf("最大價值：%d\n", knapsack(c, w, v, n));
}