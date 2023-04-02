#include <stdio.h>

int main() {
  int n, M, S, i, num;
  printf("請輸入 n, M, S\n");
  scanf("%d %d %d", &n, &M, &S);

  int t[M + 1];  // M 是出租物品的數量
  for (i = 1; i <= M; i++) {
    t[i] = 0;  // 除了第 0 格，全部預設為 0
  }

  t[0] = 1;      // 第 0 格設為 1
  int rents[n];  // 儲存每個承租的數量
  printf("請輸入租用資料 \n");
  int total = 0;  // 儲存已出租的總數

  for (i = 0; i < n; i++) {
    scanf("%d", &num);
    rents[i] = num;
    total += num;  // 目前租用的數量
  }

  // 開始填寫表格 t
  num = rents[0];  // 取出第一個承租數量
  t[num] = 1;      // 把這一格設成 1

  for (i = 1; i < n; i++) {
    for (int j = M; j > 0; j--) {
      if (t[j] == 1) {
        num = rents[i] + j;
        t[num] = 1;
      }
    }
    num = rents[i];
    t[num] = 1;
  }

  int left = M - total;  // 剩餘的數量
  if (left >= S) {
    printf("不用退租");
    return 0;
  }

  // 輸出結果
  for (i = (S - left); i < M; i++) {
    if (t[i] == 1) {
      break;
    }
  }

  printf("結果：%d\n", i);
}