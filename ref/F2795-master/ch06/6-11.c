#include <stdio.h>

int main() {
  char str[100];

  printf("請輸入英文字串：");
  scanf("%[^\n]", str);
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }

  printf("轉換成小寫之後：%s\n", str);
}