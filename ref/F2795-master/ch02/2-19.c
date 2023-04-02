// 參閱2-19頁
#include <stdio.h>

int main() {
  short A = 32769;
  unsigned short B = 32769;
  unsigned short C = 65539;

  printf("A: %hd\n", A);
  printf("B: %hu\n", B);
  printf("C: %hu\n", C);
}