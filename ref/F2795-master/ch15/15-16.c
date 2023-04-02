#include <stdio.h>
// 取較小值的巨集指令
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define MAX_NUM 99999  // 代表「很大的數字」

int minCoins(int coins[], int s, int val) {
  int t[val + 1];  // 儲存錢幣數量的表格

  t[0] = 0;  // 除了第 0 格，表格內容預設為「最大值」

  for (int i = 1; i <= val; i++)  // 從第 1 格開始填表
    t[i] = MAX_NUM;

  for (int i = 1; i <= val; i++) {  // 逐一嘗試填入每個面額的硬幣
    for (int j = 0; j < s; j++) {   // 如果面額小於或等於這一格的金額
      if (coins[j] <= i) {          // 根據上文的運算過程，取最小值填入這一格
        t[i] = MIN(t[i], t[i - coins[j]] + 1);
      }
    }
  }

  // 如果到最後找不出解答，則傳回 -1
  if (t[val] == MAX_NUM)
    return -1;

  return t[val];  // 傳回硬幣數量
}

int main() {
  int coins[] = {1, 3, 5, 7};                // 硬幣面額
  int s = sizeof(coins) / sizeof(coins[0]);  // 面額種類
  int val = 18;                              // 找零的金額

  printf("最少硬幣數：%d\n", minCoins(coins, s, val));
}