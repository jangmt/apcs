#include <locale.h>
#include <stdio.h>
#include <wchar.h>

int main() {
  char *loc = setlocale(LC_CTYPE, "");  // 取得系統預設的語系編碼名稱

  wprintf(L"系統預設文字編碼：");  // 使用 wprintf 顯示中文
  printf("%s\n", loc);             // 使用 printf 顯示字元指標內容
}