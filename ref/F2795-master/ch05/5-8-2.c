// 參閱5-8頁
#include <stdio.h>
#include <stdlib.h>  // 內含 rand()
#include <time.h>    // 內含 time()

int main() {
  int n;
  srand((unsigned)time(NULL));  // 設置隨機種子
  n = rand() % 5;               // n 值介於 0~4

  printf("就是要：");
  switch (n) {
    case 0:
      printf("排骨飯\n");
      break;
    case 1:
      printf("椒麻雞飯\n");
      break;
    case 2:
      printf("披薩\n");
      break;
    case 3:
      printf("肉圓\n");
      break;
    case 4:
      printf("拉麵\n");
      break;
  }
}
