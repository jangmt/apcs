// 參閱4-11頁
#include <stdio.h>

int main() {
  int year;  // 宣告儲存年份的整數型態變數

  printf("請輸入年份：");
  scanf("%d", &year);

  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
    printf("%d 是閏年。\n", year);
  } else {
    printf("%d 是平年。\n", year);
  }
}