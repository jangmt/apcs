#include <stdio.h>

int main() {
  int n = 69;
  int m = ~n + 1;  // 取 2 的補數

  printf("%d 轉成負數：%d\n", n, m);
}