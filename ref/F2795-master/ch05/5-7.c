// 參閱5-7頁
#include <stdio.h>
#include <stdlib.h>  // 內含 rand() 函式
#include <time.h>    // 內含 time() 函式

int main() {
  srand((unsigned)time(NULL));
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());
}