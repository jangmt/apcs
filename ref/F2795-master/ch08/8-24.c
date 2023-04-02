#include <stdio.h>

int main() {
  int n = 4;
  int arr[n][n];  // 宣告 n × n 大小的陣列

  for (int i = 0; i < n; i++) {    // 設定列
    for (int j = 0; j < n; j++) {  // 設定行
      arr[i][j] = (i + 1) * (j + 1);
      printf("%4d", arr[i][j]);
    }
    printf("\n");
  }
}