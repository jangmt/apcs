#include <stdio.h>

void appendFile(const char *str) {    // 接收字串
  FILE *fp = fopen("memo.txt", "a");  // 以「附加」模式開檔
  fputs(str, fp);                     // 寫入字串
  fclose(fp);                         // 關閉檔案
}

void readFile() {
  char c;
  FILE *fp = fopen("memo.txt", "r");  // 以「讀取」模式開檔

  while ((c = fgetc(fp)) != EOF) {  // 讀取整份文字檔
    printf("%c", c);
  }
  fclose(fp);
}

int main() {
  appendFile("hello\n");
  appendFile("world\n");
  readFile();
}