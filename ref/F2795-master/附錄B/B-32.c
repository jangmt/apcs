#include <locale.h>  // 引用區域設定函式庫
#include <stdio.h>
#include <wchar.h>  // 引用寬字元函式庫

int main() {
  setlocale(LC_CTYPE, "");

  wchar_t heart = 0x1F498;  // 心型符號的Unicode編碼
  wprintf(L"扣人%lc弦\n", heart);
}