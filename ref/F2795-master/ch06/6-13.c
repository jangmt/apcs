#include <stdio.h>

int main() {
  unsigned char msg[100], c;
  int key;

  printf("請輸入訊息：");
  scanf("%s", msg);
  printf("請輸入密鑰數字：");
  scanf("%d", &key);

  key %= 26;  // 將密鑰數字限制在 1~26

  // 從索引 0 開始，逐一取出 msg 裡的字元，直到字串結尾…
  for (int i = 0; msg[i] != '\0'; i++) {
    c = msg[i];
    // 讀取字元 i
    if (c >= 'a' && c <= 'z') {  // 如果是小寫字母…
      c += key;                  // 位移編碼

      // 若編碼值超過最後一個字母則減去 26
      if (c > 'z')
        c -= 26;
    } else if (c >= 'A' && c <= 'Z') {
      c += key;

      if (c > 'Z')
        c -= 26;
    }
    msg[i] = c;  // 把編碼值存回陣列
  }
  printf("\n 加密的訊息：%s\n", msg);
}