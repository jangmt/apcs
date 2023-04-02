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

// 「選擇排序」自訂函式
void selectionSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {  // 外迴圈，執行至倒數第 2 元素
    int min = i;                        // 紀錄最小元素值的索引編號

    for (int j = i + 1; j < size; j++) {  // 內迴圈，執行至最後一個元素
      if (arr[j] < arr[min]) min = j;
    }

    swap(&arr[min], &arr[i]);
  }
}

int main() {
  int data[] = {6, 9, 7, 3, 1, 5};
  int size = sizeof(data) / sizeof(int);

  printf("陣列的初始內容：\n");
  printArray(data, size);
  selectionSort(data, size);  // 執行排序
  printf("\n 依升冪排序之後：\n");
  printArray(data, size);
}