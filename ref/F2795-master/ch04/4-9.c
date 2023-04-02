// 參閱4-9頁
#include <stdio.h>

int main() {
  int year;  // 宣告儲存年份的整數型態變數

  printf("請輸入年份：");
  scanf("%d", &year);

  if (year % 4 != 0) {
    printf("不可被 4 整除，平年。\n");
  } else if (year % 100 != 0) {
    printf("可被 4 整除且不可被 100 整除，閏年。\n");
  } else if (year % 400 != 0) {
    printf("可被 100 整除，且不可被 400 整除，平年。\n");
  } else {
    printf("可被 400 整除，閏年。\n", year);
  }
}