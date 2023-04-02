#include <stdio.h>

int main() {
  int nums[] = {10, 20, 30, 40};  // 共有 4 個整數型元素
  int total = sizeof(nums);       // 確認陣列佔用的位元組大小

  printf("nums 陣列的位元組大小：%d\n", total);
}