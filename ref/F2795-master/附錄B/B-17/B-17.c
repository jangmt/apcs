#include <stdio.h>

int main() {
  char c;                              // 暫存讀入字元
  FILE* fp = fopen("memo.txt", "r+");  // 以 r+ 模式開檔

  while ((c = fgetc(fp)) != EOF) {
    // 讀取整份文字檔
    printf("%c", c);
  }

  fprintf(fp, "\nno diamonds.\n");
  printf("\n 從頭讀取檔案內容：\n");
  rewind(fp);
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  fclose(fp);
}