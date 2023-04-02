#include <stdio.h>
#define NUM 10     // 費式數列的計算 n 值
int f[NUM] = {0};  // 暫存計算值的 n 個元素陣列，全部元素預設為 0

int fib(int n) {
  if (n <= 1) {
    return n;
  } else if (f[n] != 0) {
    return f[n];
  } else {
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
  }
}

int main() {
  printf("f(%d)=%d\n", NUM, fib(NUM));
}