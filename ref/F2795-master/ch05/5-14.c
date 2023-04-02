// 參閱5-14頁
#include <stdio.h>

int main() {
  int rows = 5;  // 5 列金字塔

  for (int i = 0; i < rows; i++) {  // 從第 0 列開始…
    for (int sp = 0; sp < rows - i - 1; sp++) {
      printf(" ");  // 輸出空白
    }
    for (int stars = 0; stars < i * 2 + 1; stars++) {
      printf("*");
    }
    printf("\n");  // 切換到下一列
  }
}