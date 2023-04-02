#include <locale.h>  // 引用區域設定函式庫
#include <stdio.h>
#include <wchar.h>  // 引用寬字元函式庫

int main() {  // 設定採 "C.UTF-8" 編碼
  char *loc = setlocale(LC_CTYPE, "C.UTF-8");

  if (loc == NULL) {
    printf("字元編碼設置失敗～");
    return -1;
  }

  wprintf(L" C.UTF-8 編碼設置成功！");
}