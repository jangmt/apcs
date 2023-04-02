#include <stdio.h>
#include <stdlib.h>  // 內含 qsort 函式

int cmp(const void *a, const void *b) {
  return (*(int *)a - *(int *)b);
}
double getMedian(int arr[], unsigned int num) {  // 求中位數
  double median;                                 // 儲存中位數
  qsort(arr, num, sizeof(int), cmp);             // 快速升冪排序

  if (num % 2 == 0) {  // 若資料有偶數個…
    median = (double)(arr[num / 2] + arr[num / 2 - 1]) / 2;
  } else {  // 若資料有奇數個…
    median = arr[num / 2];
  }
  return median;
}

int main() {
  int data[] = {159, 148, 156, 164, 153, 162};
  int size = sizeof(data) / sizeof(data[0]);  // 陣列大小
  double median = getMedian(data, size);      // 求中位數

  printf("中位數：%g\n", median);
}