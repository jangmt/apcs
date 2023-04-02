#include <stdio.h>
#define N 5  // 迷宮的大小

void printSolution(int v[N][N]) {  // 輸出迷宮路徑
  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N; x++)
      printf(" %c ", v[y][x] == 1 ? '@' : '-');

    printf("\n");
  }
}

// 檢查 x, y 是否在 N*N 迷宮的有效範圍內
int isValid(int x, int y, int m[N][N]) {
  // 如果 x, y 在迷宮邊界之內，而且是「道路」則傳回1。
  if (x >= 0 && x < N && y >= 0 && y < N && m[y][x] == 1)
    return 1;

  return 0;
}

// 走訪路徑的遞迴函式
int go(int x, int y, int m[N][N], int v[N][N]) {
  // 若抵達目的，傳回1。
  if (x == N - 1 && y == N - 1 && m[y][x] == 1) {
    v[y][x] = 1;
    return 1;
  }

  if (isValid(x, y, m)) {  // 檢查 m[y][x] 是否可走訪
    if (v[y][x] == 1)      // 若目前位置已走訪過，則離開。
      return 0;

    v[y][x] = 1;  // 把目前位置標記為「已走訪」
    // printf("目前位置m[%d][%d]\n", y, x);
    if (go(x + 1, y, m, v))  // 右
      return 1;
    if (go(x, y + 1, m, v))  // 下
      return 1;
    if (go(x - 1, y, m, v))  // 左
      return 1;
    if (go(x, y - 1, m, v))  // 上
      return 1;

    printf("退後：[%d][%d]\n", y, x);
    v[y][x] = 0;  // 若無法走訪，則該地點設為0（回溯）。
    return 0;
  }

  return 0;
}

int solveMaze(int m[N][N]) {
  int v[N][N] = {{0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0},
                 {0, 0, 0, 0, 0}};

  if (!go(0, 0, m, v)) {
    printf("無解！");
    return 0;
  }

  printSolution(v);
  return 1;
}

int main() {
  int m[N][N] = {{1, 1, 1, 1, 0},
                 {0, 1, 0, 1, 0},
                 {1, 1, 0, 0, 1},
                 {1, 0, 1, 1, 1},
                 {1, 1, 1, 0, 1}};

  solveMaze(m);
}