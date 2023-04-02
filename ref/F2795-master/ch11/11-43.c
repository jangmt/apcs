#include <stdio.h>
#include <stdlib.h>  // 內含 qsort 函式

int n, k;  // n：點的數量、k：線段的數量

int cmp(const void* a, const void* b) {  // qsort 的比較函式
  return (*(int*)a - *(int*)b);          // 昇冪排序
}

/*
確認長度 d 能否覆蓋所有點
參數 d：距離長度
參數 loc[]：點的資料陣列
傳回值：1 代表全部覆蓋、0 代表無法全部覆蓋。
 */
int search(int d, int loc[]) {
  int range = 0, count = 0, i = 0;

  while (i < n) {
    // 逐一取出每個點
    range = loc[i] + d;  // 計算覆蓋範圍
    count++;             // 統計需要的線段數量

    if (count > k)  // 若所需線段數大於 k（預設數量）…
      return 0;     // 代表不符合條件，傳回 0

    // 如果（點的位置 <= 覆蓋範圍），代表可覆蓋所有的點
    if (loc[n - 1] <= range)
      return 1;  // 若可覆蓋所有點，且線段數量 <= 預設，傳回 1

    do {
      i++;                      // 換下一個點
    } while (loc[i] <= range);  // 查看是否可覆蓋下一個點
  }

  return 1;
}

int main() {
  scanf("%d %d", &n, &k);
  int loc[n];  // 紀錄點的位置

  for (int i = 0; i < n; i++)
    scanf("%d", &loc[i]);

  qsort(loc, n, sizeof(int), cmp);  // 排序點的位置

  int min = 1;                              // 最小值從 1 開始
  int max = (loc[n - 1] - loc[0]) / k + 1;  // 分段的最大值

  while (min <= max) {             // 只要範圍最小值沒有超過最大值…
    int middle = (min + max) / 2;  // 求出中間值（二分搜尋法的概念）
    if (search(middle, loc)) {     // 看看這個中間值能否覆蓋所有點
      max = middle;                // 傳回 1 代表符合條件，最大值設成「中間值」
    } else {
      // 傳回 0 代表無法覆蓋，將最小值移向中間值的右側，
      // 以便下一次迴圈計算增加的覆蓋範圍
      min = middle + 1;
    }
    if (min == max)
      break;
  }

  printf("%d\n", max);
}