#include <stdio.h>  // 編譯環境是 C++

int main() {
  int num = 12;
  int &ref = num;

  ref = 47;
  printf("%d", num);
}