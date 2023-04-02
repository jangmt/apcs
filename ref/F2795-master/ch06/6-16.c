#include <stdio.h>

int main() {
  char str[100];     // 預留儲存使用者輸入字串的空間
  int i = 0, j = 0;  // 紀錄字元編號

  printf("請輸入英文字串：");
  scanf("%[^\n]s", str);

  while (str[i]) {
    if (str[i] != ' ') {
      str[j] = str[i];
      j++;
      // 觀察變數 i, j 的變化
      // printf("變數 i=%d, j=%d\n", i, j);
    }
    i++;
  }

  str[j] = '\0';
  printf("刪除空格之後：%s\n", str);
}