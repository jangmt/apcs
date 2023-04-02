#include <stdio.h>
#include <time.h>  // 內含時間相關函式和常數

long sum(long n) {  // 計算 1 到 n 的加總
  long total = 0;

  for (int i = 1; i <= n; i++) {  // 執行 n 次迴圈
    total += i;                   // 計算並儲存 1+2+3+….+n
  }
  return total;
}

int main() {
  clock_t t = clock();        // 儲存目前時間
  long total = sum(100000L);  // 計算加總

  t = clock() - t;                                 // 計算時間差
  double time_spent = (double)t / CLOCKS_PER_SEC;  // 轉成秒數
  printf("答：%ld，花費時間：%f 秒\n", total, time_spent);
}