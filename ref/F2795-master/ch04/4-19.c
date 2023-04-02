// 參閱4-19頁
#include <stdio.h>

int main() {
  int m;  // 宣告儲存月份的變數

  printf("請輸入月份：\n");
  scanf("%d", &m);

  switch (m) {
    case 3:
    case 4:
    case 5:
      printf("春季\n");
      break;
    case 6:
    case 7:
    case 8:
      printf("夏季\n");
      break;
    case 9:
    case 10:
    case 11:
      printf("秋季\n");
      break;
    case 12:
    case 1:
    case 2:
      printf("冬季\n");
      break;
    default:
      printf("請輸入數字 1~12。\n");
  }
}