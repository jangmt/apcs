#include <stdio.h>

int main() {
  int x = 0x69;     // 0110 1001
  int flag = 0x10;  // 0001 0000

  int ans = x | flag;
  printf("設置結果：0x%x\n", ans);  // 編譯輸出：0x79
}