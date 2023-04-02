// 參閱5-8頁
#include <stdio.h>
#include <stdlib.h>  // 內含 rand()
#include <time.h>    // 內含 time()

int main() {
  srand((unsigned)time(NULL));

  for (int i = 0; i < 5; i++) {  // 此迴圈將執行 5 次
    int n = rand();              // 產生隨機數字，存入變數 n

    printf("隨機值：%d、取餘數：%d\n", n, n % 10 + 1);  // 餘數值+1
  }
}