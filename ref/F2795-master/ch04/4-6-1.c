// 參閱4-6頁
#include <stdio.h>

int main() {
  int total = 20, price = 16;
  int rem = total - price;

  if (rem > 0) {
    printf("退還%d元\n", rem);
  }
}