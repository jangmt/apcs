#include <stdio.h>
#define NUM 10     // 費式數列的計算 n 值
int f[NUM] = {0};  // 暫存計算值的 n 個元素陣列，全部元素預設為 0

int fib(int n) {
  int a = 0, b = 1, c;
  if (n <= 1)
    return n;
  for (int i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

int main() {
  printf("f(%d)=%d\n", NUM, fib(NUM));
}