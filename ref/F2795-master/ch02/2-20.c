// 參閱2-20頁
#include <stdio.h>

int main() {
  int A = 2.13E9;
  // long B = A * 100;
  long B = A * 100L;

  printf("ANS: %ld\n", B);
}