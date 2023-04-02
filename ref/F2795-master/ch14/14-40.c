#include <stdio.h>

int n, m;
int dir[4][2] = {
    {0, 1},
    {1, 0},
    {0, -1},
    {-1, 0}};  // 定義四個方向的 y, x 移動值

// 檢查 x, y 是否在 n*m 的有效範圍內
int isValid(int y, int x, int arr[n][m]) {
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
        x = j;
        y = i;
      }
    }
  }

  int total = mini;
  while (1) {
    int mini = 1000000;
    int dx, dy;

    for (int i = 0; i < 4; i++) {  // 嘗試往四個方向移動
      if (isValid(y + dir[i][0], x + dir[i][1], arr)) {
        if (arr[y + dir[i][0]][x + dir[i][1]] < mini) {
          dx = x + dir[i][1];
          dy = y + dir[i][0];
          mini = arr[dy][dx];  // 紀錄最小值的位置
        }
      }
    }

    if (mini == 1000000) {
      break;
    } else {
      arr[y][x] = -1;
      x = dx;
      y = dy;
      total += mini;
    }
  }

  printf("%d\n", total);
}