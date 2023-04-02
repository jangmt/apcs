// 參閱6-4頁
#include <stdio.h>

int main() {
  int nums[] = {10, 20, 30, 40};  // 定義 4 個整數元素的陣列

  for (int i = 0; i < 4; i++) {
    printf("nums[%d]的值：%d\n", i, nums[i]);
  }
}