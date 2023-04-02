#include <stdio.h>
#include <stdlib.h>  // 內含 rand() 的函式庫
#include <time.h>    // 內含 time() 的函式庫

int main() {
  char *words[] = {"飲食", "閱讀", "穿搭", "聽音樂"};
  int n, size = sizeof(words) / sizeof(words[0]);  // 取得字串數量

  srand((unsigned)time(NULL));  // 設置隨機種子
  n = rand() % size;            // 產生字串數量範圍之內的隨機數字
  printf("生活不可能每天都好，但 %s 可以。\n", words[n]);
}