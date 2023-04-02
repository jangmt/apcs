// 參閱4-17頁
#include <stdio.h>

int main() {
  int num;

  printf("請輸入數字-1, 0 或 1");
  scanf("%d", &num);

  switch (num) {
    case -1:
      printf("負 1\n");
      break;
    case 0:
      printf("零\n");
      break;
    case 1:
      printf("正 1\n");
      break;
    default:
      printf("超出範圍\n");
  }
}