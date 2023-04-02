#include <stdio.h>

int main() {
  int rows;

  printf("請輸入 1～13 之內的列數：");
  scanf("%d", &rows);

  if (rows < 1 || rows > 13) {
    printf("請輸入 1～13 之內的列數：");
    scanf("%d", &rows);
  }

  for (int i = 1; i <= rows; i++) {
    int a = 1;

    for (int sp = 0; sp < rows - i; sp++)
      printf(" ");

    for (int j = 1; j <= i; j++) {
      printf("%4d", a);
      a = a * (i - j) / j;
    }
    printf("\n");
  }
}