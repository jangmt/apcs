#include <stdio.h>

int main() {
  FILE *fp = fopen("note.txt", "r");
  char str[10];  // 暫存字串

  if (fp == NULL) {
    printf("找不到檔案！");
    return 1;
  }

  printf("文字檔內容：\n");
  while (fgets(str, 10, fp) != NULL) {
    printf("%s", str);  // 顯示字串內容
  }

  printf("\n");
  fclose(fp);
}