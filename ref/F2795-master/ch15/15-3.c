#include <stdio.h>
#define NUM 10  // 費式數列的計算 n 值

int fib(int n) {  // 計算費式數列的遞迴函式
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  printf("f(%d)=%d\n", NUM, fib(NUM));
}