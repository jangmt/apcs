#include <stdio.h>
#include <stdlib.h>  // 內含 qsort 函式

int cmp(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);  // 昇冪排序
}

int main() {
  int n, i;
  scanf("%d", &n);  // 讀取學生人數
  int scores[n];    // 宣告人數大小的成績陣列

  for (i = 0; i < n; i++) {
    scanf("%d", &scores[i]);  // 讀入成績
  }

  qsort(scores, n, sizeof(int), cmp);  // 快速排序

  // 顯示已排序的成績資料，從第一筆到倒數第 2 筆
  for (i = 0; i < n - 1; i++) {
    printf("%d ", scores[i]);
  }

  // 最後一個成績後面無空白，緊跟著換行字元
  printf("%d\n", scores[i]);
  if (scores[0] >= 60) {    // 若第一筆成績及格
    printf("best case\n");  // 顯示 "best case"
  } else {
    i = n - 1;  // 從最後一筆往前找
    while (scores[i] >= 60)
      i--;
    printf("%d\n", scores[i]);  // 顯示最高不及格分數
  }
  if (scores[n - 1] < 60) {  // 若最後一個成績分數不及格…
    printf("worst case\n");  // 顯示 "worst case"
  } else {
    i = 0;  // 從第一個元素往後找
    while (scores[i] < 60) i++;
    printf("%d\n", scores[i]);  // 顯示最低及格成績
  }
}