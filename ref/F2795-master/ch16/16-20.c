#include <stdio.h>
#define SIZE 5  // 自訂的雜湊表大小

// 接收正負整數鍵值的雜湊函式
unsigned int setHash(int n) {
  unsigned int h = n;
  return h % SIZE;
}

int main() {
  printf("雜湊值：%d\n", setHash(-127));
}