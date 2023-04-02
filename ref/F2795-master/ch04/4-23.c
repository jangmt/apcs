// 參閱4-23頁
#include <stdio.h>

int main() {
  int i = 1;
  int sum = 0;  // 一開始，sum 為 0

  do {
    sum += i * i;  // 此敘述等同：sum = sum + i*i; i++;
  } while (i <= 10);

  printf("答：%d\n", sum);
}