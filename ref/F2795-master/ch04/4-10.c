// 參閱4-10頁
#include <stdio.h>

int main() {
  int year;  // 宣告儲存年份的整數型態變數

  printf("請輸入年份：");
  scanf("%d", &year);

  if (year % 4 != 0) {
    printf("不可被 4 整除，平年\n");
  } else {
    if (year % 100 != 0) {
      printf("可被 4 整除但不可被 100 整除，潤年\n");
    } else if (year % 400 != 0) {
      printf("可被 100 整除，但不可被 400 整除，平年\n");
    } else {
      printf("可被 400 整除，潤年");
    }
  }
}