#include <locale.h>  // 內含環境設定相關的函式與常數定義
#include <stdio.h>

int main() {
  char *loc = setlocale(LC_CTYPE, "");
  printf("系統預設字元編碼：%s\n", loc);
}