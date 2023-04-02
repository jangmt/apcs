#include <stdio.h>

void main() {
  char str[100];  // 暫存使用者輸入字串的陣列變數
  int count = 0;  // 單字數，預設 0
  int mark = 0;   // 0 代表尚未算入這個字
  printf("請輸入一句英文：");
  scanf("%[^\n]s", str);  // 一直讀取到 '\n' 為止

  // 從索引 0 開始，逐一取出 str 裡的字元，直到字串結尾…
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {     // 遇到空格…
      mark = 0;              // …是單字的起頭，尚未算入
    } else if (mark == 0) {  // 還沒有算入這個單字嗎？
      count++;               // 單字數加 1
      mark = 1;
    }
  }
  printf("句子裡的單字數：%d\n", count);
}