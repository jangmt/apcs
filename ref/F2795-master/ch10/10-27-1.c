#include <stdio.h>

int main() {
  int x = 0x69;     // 0110 1001
  int mask = 0xF0;  // 1111 0000

  int ans = x & mask;
  printf("篩選結果：0x%x\n", ans);  // 編譯輸出：0x60
}