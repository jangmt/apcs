#include <stdio.h>
#define MAX_NUM 9999  // 代表「很大的數字」

/*
  找出最小硬幣數量
  參數 1：coins[]金額陣列
  參數 2：錢幣面額的數量
  參數 3：餘額（目標金額）
*/
int minCoins(int coins[], int s, int val) {
  if (val == 0)
    return 0;  // 走訪到葉節點

  int n = MAX_NUM;               // 最少硬幣數，預設為「很大的數字」
  for (int i = 0; i < s; i++) {  // 逐一測試每個錢幣面額
    if (coins[i] <= val) {       // 若錢幣面額小於餘額
      // 傳回此面額的最少硬幣數（遞迴執行到傳回 0）
      int sub = minCoins(coins, s, val - coins[i]);
      // 如果硬幣數 +1 小於之前的數量…
      if (sub != MAX_NUM && sub + 1 < n)
        // 更新硬幣數（也就是取較小值，換一個錢幣所以 +1）
        n = sub + 1;
    }
  }
  return n;  // 傳回這個節點的最少硬幣數（或無窮大）
}

int main() {
  int coins[] = {1, 2, 5};                   // 硬幣面額
  int s = sizeof(coins) / sizeof(coins[0]);  // 面額種類
  int val = 7;                               // 找零的金額

  printf("最少硬幣數：%d\n", minCoins(coins, s, val));
}