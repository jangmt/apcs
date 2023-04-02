// 參閱3-5頁
#include <stdio.h>

int main() {
  char c1 = 'A';  // 'A' 可改成 0x41 或 65
  char c2 = 97;   // 97 可改成 0x61 或 'a'

  printf("c1 的數值：%d，等同 ASCII 字元：%c\n", c1, c1);
  printf("c2 的數值：%d，等同 ASCII 字元：%c\n", c2, c2);
}