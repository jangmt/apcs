#include <stdio.h>
// 取較大值的巨集指令
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int m, n, ans;  // 全域整數變數和陣列的預設值都是 0
int e[10001], L[10001], R[10001], dp[51][10001];

int main() {
  // 讀取 m 值（資料行數，在程式中是「列」數）和 n 值
  scanf("%d %d", &m, &n);

  for (int y = 1; y <= m; y++) {    // 從第 1 列開始處理到 m 列
                                    // 從左到右…
    for (int x = 1; x <= n; x++) {  // 從第 1 行開始處理到 n 行
      scanf("%d", &e[x]);           // 讀取經驗值

      if (x == 1)  // 若是第 1 行…
        // 讀取 dp[前一列][1]，加 e[1]存入 L[1]
        L[x] = dp[y - 1][x] + e[x];
      else
        // 比較 dp 的前一列與 L 的前一格，取較大者，
        // 加上這一個輸入值
        L[x] = MAX(dp[y - 1][x], L[x - 1]) + e[x];
    }  // 從右到左…
    for (int x = n; x >= 1; x--) {
      if (x == n)
        R[x] = dp[y - 1][x] + e[x];
      else
        R[x] = MAX(dp[y - 1][x], R[x + 1]) + e[x];
      dp[y][x] = MAX(L[x], R[x]);
    }
  }

  // 取出 dp 陣列中的最大值，此處用最簡單的循序比較方式
  // 讀者可自行嘗試改用快速排序法找出最大值
  for (int i = 1; i <= n; i++) {
    ans = MAX(ans, dp[m][i]);
  }

  printf("%d", ans);
}