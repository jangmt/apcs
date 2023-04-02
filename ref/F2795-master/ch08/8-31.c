#include <stdio.h>

int main() {
  int num;

  printf("請輸入列數：");
  scanf("%d", &num);

  for (int row = 0; row < num; row++) {
    int coef = 1;  // 0 次方的係數為 1

    printf("%d 次方的係數：", row);

    for (int col = 0; col <= row; col++) {
      if (col != 0) {  // 非第 0 行才需要計算
        coef = coef * (row + 1 - col) / col;
      }
      printf("%4d", coef);
    }

    printf("\n");
  }
}