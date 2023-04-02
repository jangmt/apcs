#include <stdio.h>
int n, m;

// 檢查 x, y 是否在 n*m 的有效範圍內
int isValid(int x, int y, int arr[n][m]) {
  if (x >= 0 && x < m && y >= 0 && y < n && arr[y][x] != -1)
    return 1;

  return 0;
}

int main() {
  scanf("%d %d", &n, &m);
  int arr[n][m];
  int mini = 1000000;  // 紀錄輸入的最小值
  int x, y;            // 紀錄最小值的位置

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
      if (arr[i][j] < mini) {
        mini = arr[i][j];
        x = j;  // 紀錄最小值的位置
        y = i;
      }
    }
  }

  int total = mini;
  while (1) {
    int mini = 1000000;
    int dx, dy;

    // 往右
    if (isValid(x + 1, y, arr)) {
      if (arr[y][x + 1] < mini) {  // 右邊格子的值
        dx = x + 1;
        dy = y;
        mini = arr[y][x + 1];
      }
    }

    // 往下
    if (isValid(x, y + 1, arr)) {
      if (arr[y + 1][x] < mini) {
        dx = x;
        dy = y + 1;
        mini = arr[y + 1][x];  // 底下格子的值
      }
    }

    // 往左
    if (isValid(x - 1, y, arr)) {
      if (arr[y][x - 1] < mini) {
        dx = x - 1;
        dy = y;
        mini = arr[y][x - 1];  // 左邊格子的值
      }
    }

    // 往上
    if (isValid(x, y - 1, arr)) {
      if (arr[y - 1][x] < mini) {
        dx = x;
        dy = y - 1;
        mini = arr[y - 1][x];  // 底下格子的值
      }
    }

    if (mini == 1000000) {
      // 如果最小值沒有更新，代表無路可走，退出 while 結束程式
      break;
    } else {
      arr[y][x] = -1;  // 把目前所在格子的值設成 -1
      x = dx;          // 更新座標值
      y = dy;          // 累計走過格子的值
      total += mini;
    }
  }
  printf("%d\n", total);
  return 0;
}
