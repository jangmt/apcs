#include <stdio.h>

int main() {
  char c;                             // 暫存字元
  FILE *fp = fopen("note.txt", "r");  // 以唯讀模式開啟 note.txt 檔

  if (fp == NULL) {
    printf("找不到檔案！");
    return 1;
  }

  printf("文字檔內容：\n");
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  printf("\n");
  fclose(fp);
}