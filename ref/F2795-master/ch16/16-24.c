#include <stdio.h>
#define SIZE 5  // 雜湊表的大小

int hashTable[SIZE] = {0};  // 定義雜湊表

unsigned int setHash(int n) {
  unsigned int h = n;       // 轉成正整數
  h = h % SIZE;             // 計算雜湊值
  if (hashTable[h] == 0) {  // 若雜湊表的這個位置沒有值
    hashTable[h] = n;       // 存入鍵值
  } else {
    printf("跟 %d 發生碰撞，重新取值。\n", h);
    while (hashTable[h] != 0) {  // 直至遇到這個位置沒有值…
      h++;                       // 雜湊值每次加 1
      h %= SIZE;                 // 更新後的雜湊值仍要限制在雜湊表的範圍內
    }
    hashTable[h] = n;
  }
  return h;
}

int main() {
  printf("%d 的雜湊值：%d\n", 996, setHash(996));
  printf("%d 的雜湊值：%d\n", 168, setHash(168));
  printf("%d 的雜湊值：%d\n", 1, setHash(1));
  printf("%d 的雜湊值：%d\n", 76, setHash(76));
}
