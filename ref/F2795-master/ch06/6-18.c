#include <stdio.h>
#include <string.h>  // 內含各種字串處理函式

int main() {
  char str1[10];  // 預留足夠的空間，此例最多 9 個字元和結尾 '\0'
  char str2[] = "hello";

  strcpy(str1, "Hey!");  // 設定 str1 內容
  strcpy(str2, str1);    // 複製 str1（含 '\0' 結尾）給 str2

  printf("str2 的內容：%s\n", str2);
}