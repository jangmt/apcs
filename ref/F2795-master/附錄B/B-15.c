#include <stdio.h>

int main() {
  char c;
  FILE *fp;

  fp = fopen("memo.txt", "w+");            // 以「讀、寫」模式開檔
  fputs("綠豆的英文不是 green bean", fp);  // 寫入字串

  while ((c = fgetc(fp)) != EOF) {
    // 讀取整份文字檔
    printf("%c", c);
  }
  fclose(fp);
}