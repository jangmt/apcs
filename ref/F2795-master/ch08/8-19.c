#include <stdio.h>

void check(int *tmp) {
  printf("tmp 的大小：%ld\n", sizeof(tmp));
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  printf("arr 的大小：%ld\n", sizeof(arr));
  check(arr);  // 傳遞 arr 陣列給函式
}