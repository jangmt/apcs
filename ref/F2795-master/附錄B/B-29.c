#include <locale.h>  // 引用區域設定函式庫
#include <stdio.h>
#include <wchar.h>  // 引用寬字元函式庫

int main() {
  setlocale(LC_CTYPE, "");

  wchar_t str[] = L"扣人心弦CD";
  printf("str字元陣列佔%ld位元組\n", sizeof(str));
  wprintf(L"「%ls」共%ld個字\n", str, wcslen(str));
}