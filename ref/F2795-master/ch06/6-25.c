#include <stdio.h>
#include <string.h>

int main() {
  char msg[] = "tenet";  // 儲存輸入字串
  int j, i = 0;

  j = strlen(msg) - 1;       // 引用字串函式庫
  for (i = 0; i < j; i++) {  // 若 i 不小於 j，則停止迴圈
    if (msg[i] != msg[j])
      break;  // 若字元不同則退出 for 迴圈
    j--;
  }

  if (i >= j)
    printf("%s 是迴文\n", msg);
  else
    printf("%s 不是迴文\n", msg);
}