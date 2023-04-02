#include <stdio.h>
#include <stdlib.h>  // 內含 qsort 函式

int cmp(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}

int binarySearch(int data[], int left, int right, int n) {
  if (right >= left) {  // 確認右邊界大於或等於左邊界…
    int mid = left + (right - left) / 2;

    if (data[mid] == n)
      return mid;       // 若中間值等於目標數字 // 傳回中間值的索引
    if (data[mid] > n)  // 若中間值大於目標數字
      return binarySearch(data, left, mid - 1, n);
    else
      return binarySearch(data, mid + 1, right, n);  // 更新左邊界
  }

  return -1;
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