#include <stdio.h>  // 編譯環境是 C++

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 6, b = 8;

  printf("交換前：a=%d, b=%d\n", a, b);
  swap(a, b);  // 傳參照呼叫（call by reference）
  printf("交換後：a=%d, b=%d\n", a, b);
}