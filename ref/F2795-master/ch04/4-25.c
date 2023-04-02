// 參閱4-25頁
#include <stdio.h>

int main() {
  int n, i;
  unsigned long fact = 1;

  printf("請輸入大於 0 的正整數：");
  scanf("%d", &n);

  if (n > 0) {
    for (i = 1; i <= n; i++) {
      fact *= i;
    }
    printf("%d! = %lu", n, fact);
  } else {
    printf("階乘數必須是正整數。\n");
  }
}