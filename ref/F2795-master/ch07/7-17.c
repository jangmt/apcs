#include <stdio.h>

void move(int n, char from, char to, char over) {
  if (n == 1) {
    printf("移動圓盤 1，%c 到 %c\n", from, to);
    return;
  }

  move(n - 1, from, over, to);
  printf("移動圓盤 %d，%c 到 %c\n", n, from, to);
  move(n - 1, over, to, from);
}

int main() {
  int n = 3;  // 圓盤數量
  move(n, 'A', 'C', 'B');
}