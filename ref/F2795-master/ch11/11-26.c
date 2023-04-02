#include <stdio.h>
#include <stdlib.h>  // 內含 qsort 函式

int cmp(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

int binarySearch(int data[], int left, int right, int n) {
  while (left <= right) {                    // 持續執行迴圈，直到左邊界超過邊界
    int middle = left + (right - left) / 2;  // 計算中間元素的編號
    if (data[middle] == n)                   // 若陣列中間值等於目標數字…
      return middle;                         // 傳回中間元素的索引值

    if (data[middle] < n)  // 若目標數字小於陣列中間值…
      left = middle + 1;   // 更新左邊界
    else
      right = middle - 1;  // 否則更新右邊界
  }

  return -1;  // 找不到目標值，傳回 -1
}

int main() {
  int data[] = {22, 64, 43, 26, 17, 7, 13, 31, 3, 59};  // 未排序資料
  int size = sizeof(data) / sizeof(int);                // 資料總數
  int n = 31;                                           // 搜尋目標

  qsort(data, size, sizeof(data[0]), cmp);  // 快速升冪排序

  int r = binarySearch(data, 0, size - 1, n);

  if (r == -1)
    printf("查無此資料…\n");
  else
    printf("資料排在第%d 位\n", r);
}