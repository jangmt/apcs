#include <stdio.h>
#include <stdlib.h>  // 內含 malloc() 宣告
#include <string.h>  // 內含 memset() 宣告

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) printf("%d ", arr[i]);
}

int main() {
  int n = 3;
  int *arr = (int *)malloc(n * sizeof(int));  // 此行可改寫成：int arr[n];

  memset(arr, 0, n * sizeof(int));  // 從 arr 位址填入 0，共 n 個整數大小
  printArray(arr, n);               // 輸出 arr 空間的內容
}