#include <stdio.h>
#define NUM 8

int main() {
  int data[10] = {2, 9, 4, 1, 6, 4, 8, 7, 10, 3};
  int total = sizeof(data) / sizeof(int);

  for (int i = 0; i < total; i++) {
    if (NUM == data[i]) {
      printf("%d 位於 data[%d]\n", NUM, i);
      return 0;  // 提前結束 main()
    }
  }

  printf("data 裡面沒有%d\n", NUM);
  return 0;  // 結束 main()
}
