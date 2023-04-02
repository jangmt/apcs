#include <stdio.h>
#define I 2  // 原始矩陣的列數
#define J 3  // 原始矩陣的行數

int main() {
  int i, j;
  int t[J][I];  // 宣告空白二維矩陣，轉置矩陣

  // 定義原始的矩陣
  int m[I][J] = {{1, 2, 3}, {4, 5, 6}};
  for (i = 0; i < I; i++) {
    for (j = 0; j < J; j++) {
      t[j][i] = m[i][j];  // 從原始矩陣複製每個元素到轉置矩陣
    }
  }

  printf("原始矩陣：\n");
  for (i = 0; i < I; i++) {
    for (j = 0; j < J; j++) {
      printf("%d, ", m[i][j]);
    }
    printf("\n");
  }

  printf("\n 轉置矩陣：\n");
  for (i = 0; i < J; i++) {
    for (j = 0; j < I; j++) {
      printf("%d, ", t[i][j]);
    }
    printf("\n");
  }
}