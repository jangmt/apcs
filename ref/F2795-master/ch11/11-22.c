#include <stdio.h>
#include <stdlib.h>

int data[] = {32, 170, 6, 85, 24};
int size = sizeof(data) / sizeof(int);  // 陣列的元素數量（此處為 5）

void printArray(int arr[], int size) {  // 輸出陣列內容
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

// qsort 所需的「比較」函式
int cmp(const void* a, const void* b) {
  return (*(int*)a - *(int*)b);
}

int main() {
  qsort(data, size, sizeof(int), cmp);
  printArray(data, size);
}