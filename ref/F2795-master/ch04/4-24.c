// 參閱4-24頁
#include <stdio.h>

int main() {
  int num;

  printf("請輸入一個正整數：\n");
  scanf("%d", &num);
  printf("%d 的因數：", num);

  // 此迴圈將執行 num 次，i 從 1 開始，每執行一次累加 1
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      // 若能被 i 整除，代表 i 是因數
      printf("%d ", i);
    }
  }
}