#include <stdio.h>

void printArray(int arr[], int size) {  // 輸出陣列內容
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// 快速排序的自訂函式
void quickSort(int arr[], int left, int right) {
  int pivot, i, j;
  if (left >= right) return;  // 若排序範圍為 1 或更小…結束遞迴
  pivot = arr[right];         // 挑選基準值
  i = left;                   // 左索引編號
  j = right;                  // 右索引編號

  // 將資料分成「大於基準值」和「小於基準值」兩組
  while (1) {
    while (arr[i] < pivot) {  // 從左往右搜尋比基準小的數字
      i++;                    // 若遇到比較小的數字，則再往右找
    }
    while (arr[j] > pivot) {  // 從右往左搜尋比基準大的數字
      j--;                    // 若遇到比較大的數字，則再往左找
    }
    if (i >= j) {
      break;
    }
    swap(&(arr[i]), &(arr[j]));  // 交換左右兩個數字
    i++;                         // 交換之後從下一個數字開始搜尋
    j--;
  }
  quickSort(arr, left, i - 1);   // 排列比較小的分組數字（左側）
  quickSort(arr, j + 1, right);  // 排列比較大的分組數字（右側）
}

int main() {
  int data[] = {3, 5, 7, 1, 9, 2, 4};     // 要排序的資料
  int size = sizeof(data) / sizeof(int);  // 共 7 個元素

  printf("排序前：\n");
  printArray(data, size);
  quickSort(data, 0, size - 1);
  printf("快速排序後：\n");
  printArray(data, size);
}