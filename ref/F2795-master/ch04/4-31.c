// 參閱4-31頁
#include <stdio.h>

int main() {
  int num;

  while (1) {
    printf("請輸入正整數：");
    scanf("%d", &num);
    if (num < 0) {
      break;
    }
    printf("讚啦！\n");
  }

  printf("%d不是正整數啦！\n", num);
}