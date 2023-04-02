// 參閱5-6頁
#include <stdio.h>
#include <time.h>  // 內含 time() 函式以及 time_t 資料型態的定義

int main() {
  time_t sec;  // 這行可寫成：long int sec;

  sec = time(NULL);  // 參數 NULL 代表以 1970 年 1 月 1 日零時為基準時間
  printf("1970 年 1 月 1 日到現在經過的秒數：%lu\n", sec);
}