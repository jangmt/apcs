#include <stdio.h>

// 儲存輸入的 n 和 m 值，以及總值的變數
int n, m, total;

// 檢查 y, x 是否在 n*m 的範圍內，且此格未走訪（其值非 -1）
int isValid(int y, int x, int arr[n][m]) {
  if (x >= 0 && x < m && y >= 0 && y < n && arr[y][x] != -1)
    return 1;

  return 0;
}

int main() {
  scanf("%d %d", &n, &m);  // 讀入 n 和 m 值
  int arr[n][m];           // 宣告儲存地圖的陣列

  // 紀錄最小值，先設定一個大於所有可能值的數字
  int mini = 1000000;
  int x, y;  // 紀錄最小值的位置

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);  // 讀取輸入值並存入陣列
      if (arr[i][j] < mini) {   // 查看是否為最小值
        mini = arr[i][j];       // 取得最小值

        x = j;
        y = i;
      }
    }
  }
  total = mini;
}