#include <stdio.h>

int main() {
  unsigned char msg[100], c;
  int key;

  printf("請輸入要解密的訊息：");
  scanf("%s", msg);
  printf("請輸入密鑰數字：");
  scanf("%d", &key);
  key %= 26;

  for (int i = 0; msg[i] != '\0'; i++) {
    c = msg[i];
    if (c >= 'a' && c <= 'z') {
      c -= key;
      if (c < 'a') c += 26;
    } else if (c >= 'A' && c <= 'Z') {
      c -= key;
      if (c < 'A') c += 26;
    }
    msg[i] = c;
  }

  printf("\n 解密之後的訊息：%s\n", msg);
}