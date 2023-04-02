#include <stdio.h>

int sum(int arr[], int size) {  // 接收陣列和陣列大小參數
  int total = 0;
  for (int i = 0; i < size; ++i) {
    total += arr[i];
  }

  return total;  // 傳回加總結果
}

int main() {
  int ans;
  int data[] = {11, 22, 33, 44, 55};
  int size = sizeof(data) / sizeof(*data);  // 計算陣列元素數量

  ans = sum(data, size);  // 傳送陣列的起始位址和元素數量
  printf("總和：%d\n", ans);
}