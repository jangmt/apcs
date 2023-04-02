#include <stdio.h>
// 從 a, b 中選出較大者
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
// 從 a, b 中選出較小者
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
// 計算陣列的大小
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

int main() {
  int x = 3, y = 6;

  printf("%d 和 %d，%d 比較大", x, y, MAX(x, y));
}