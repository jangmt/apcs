#include <stdio.h>
#include <stdlib.h>  // 內含 qsort() 函式
#define SHOPS 3      // 3 個賣場

// qsort 的「比較」函式
int cmp(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);  // 昇冪排序
}

int main() {
  int n, diff, count = 0, total = 0;
  int avg = 0;  // 紀錄平均價格，整數

  int p[SHOPS];               // 紀錄商品在 3 家商店的售價
  scanf("%d %d", &n, &diff);  // 讀入商品數量和價差範圍

  for (int j = 0; j < n; j++) {  // 讀取 n 個商店的資料
    for (int i = 0; i < SHOPS; i++) {
      scanf("%d", &p[i]);  // 儲存商品價格
      total += p[i];
    }

    qsort(p, SHOPS, sizeof(p[0]), cmp);  // 快速排序
    int delta = p[2] - p[0];             // 計算價差

    if (delta > diff) {      // 若價差大於預設
      avg += total / SHOPS;  // 平均之後加總
      count++;               // 增加購買數量
      total = 0;             // 商品總價歸零
    }
  }

  printf("%d %d\n", count, avg);  // 輸出商品數量和平均加總
}
