#include <stdio.h>
#include <string.h>

int main() {
  char txt[] = "swf.com.tw";
  memset(txt + 4, '-', 3 * sizeof(char));  // 設定記憶體內容
  printf("%s", txt);
}