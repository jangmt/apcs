#include <stdio.h>

void printArray(int arr[], int size) {  // 輸出陣列內容
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

  printf("\n");
}

// 「氣泡排序」自訂函式
void bubbleSort(int arr[], int size) {
  for (int i = 0; i < (size - 1); i++) {
    for (int j = 0; j < (size - (i + 1)); j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int data[] = {6, 5, 3, 2, 7, 4, 8, 10, 9, 1};
  int size = sizeof(data) / sizeof(int);

  bubbleSort(data, size);  // 執行氣泡排序
  printf("氣泡排序之後：");
  printArray(data, size);
}