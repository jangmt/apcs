#include <stdio.h>
#define N 8      // 棋盤的水平和垂直方向的格子數
#define QUEEN 1  // 代表「有皇后」的常數

int board[N][N] = {0};  // 初始化棋盤陣列
int count = 0;          // 解決方案的數量統計

/*
  確認指定位置是否能放皇后
  參數r；列號（row）
  參數c：行號（column）
*/
int placeQueen(int r, int c) {
  int x, y;
  for (y = 0; y < r; y++) {
    if (board[y][c] == QUEEN)
      return 0;  // 若這一列已經有皇后，傳回0。
  }

  for (y = r, x = c; y >= 0 && x >= 0; y--, x--) {
    if (board[y][x] == QUEEN)
      return 0;  // 若左上對角線方向有皇后，則傳回0。
  }

  for (y = r, x = c; y >= 0 && x < N; y--, x++) {
    if (board[y][x] == QUEEN)
      return 0;  // 若右上對角線方向有皇后，則傳回0。
  }

  return 1;
}

void printSolution() {  // 顯示解法
  printf("第 %d 種解法：\n", count);
  for (int y = 0; y < N; y++) {
    for (int x = 0; x < N; x++) {
      printf("%c ", board[y][x] == QUEEN ? 'Q' : '-');
    }
    printf("\n");
  }
  printf("\n");  // 顯示解法之後空一行
}

void nQueen(int r) {
  if (r == N) {  // 若成功放置了N個皇后，則顯示解法。
    count++;
    printSolution();
    return;
  }

  // 嘗試在這一列（r）的每一行（x）放置皇后
  for (int x = 0; x < N; x++) {
    if (placeQueen(r, x)) {  // 如果可以放皇后…
      // printf("board[%d][%d]設成1\n", r, x);
      board[r][x] = QUEEN;  // 這一格設成「有皇后」
      nQueen(r + 1);        // 遞迴處理下一列
      // printf("board[%d][%d]設成0\n", r, x);
      board[r][x] = 0;  // 把皇后從這一格拿走（回溯）
    }
  }
}

int main() {
  nQueen(0);
}