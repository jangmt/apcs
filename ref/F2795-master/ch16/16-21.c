#include <stdio.h>
#include <string.h>  // 內含 strlen（字串長度）函式
#define SIZE 5       // 自訂的雜湊表大小

unsigned int setHash(char *str) {
  int sum = 0;
  for (int i = 0; i < strlen(str); i++) {
    sum += str[i];  // 所有字元的 ASCII 編碼總和
  }
  return sum % SIZE;
}

int main() {
  // 雜湊值：1
  printf("'book store' 的雜湊值：%d\n", setHash("book store"));
  // 雜湊值：3
  printf("'toys' 的雜湊值：%d\n", setHash("toys"));
}