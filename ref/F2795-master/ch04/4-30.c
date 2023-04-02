// 參閱4-30頁
#include <stdio.h>

int main() {
  int i = 0;
  int sum = 0;

  while (i < 10) {
    i++;
    if (i % 2 != 0) continue;
    printf("計算%d的3次方再和前面的數值相加\n", i);
    sum += i * i * i;  // 計算3次方
  }

  printf("計算結果：%d\n", sum);
}