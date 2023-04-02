#include <stdio.h>

int main() {
  char c;
  FILE *fp;
  fp = fopen("memo.txt", "w");

  if (fp == NULL) {
    printf("無法開啟檔案！");
    return 1;
  }

  fputs("綠豆的英文不是 green bean", fp);  // 寫入字串
  fclose(fp);                              // 關閉檔案

  fp = fopen("memo.txt", "r");
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }
  fclose(fp);
}