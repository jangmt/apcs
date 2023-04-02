#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式
#define COL 2        // 水平行的大小
#define ROW 3        // 垂直列的大小

int main() {
  int i, j;
  int **pt;  // 宣告雙重指標

  // 配置 3 列指向整數的記憶體空間
  pt = (int **)malloc(sizeof(int *) * ROW);
  for (i = 0; i < ROW; i++) {
    // 配置 2 行整數記憶體空間並指向它
    pt[i] = (int *)malloc(sizeof(int) * COL);
  }

  for (i = 0; i < ROW; i++) {  // 設置元素值
    for (j = 0; j < COL; j++) {
      pt[i][j] = i * COL + j;
    }
  }

  for (i = 0; i < ROW; i++) {  // 顯示元素值
    for (j = 0; j < COL; j++) {
      printf("%d, ", pt[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < ROW; i++) {  // 釋放水平行指向的記憶體
    free(pt[i]);
  }
  free(pt);  // 釋放雙重指標指向的記憶體
}