#include <stdio.h>

int main() {
  int ans, x = 0x369;
  int mask = 0x0F;

  for (int i = 0; i < 3; i++) {
    ans = (x >> 4 * i) & mask;
    printf("0x%02x  ", ans);
  }
}