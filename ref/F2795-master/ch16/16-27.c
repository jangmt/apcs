#include <stdio.h>
#define SIZE 5  // 雜湊表的大小

int hashTable[SIZE] = {0};  // 定義雜湊表

unsigned int setHash(int n) {
  unsigned int h = n;  // 轉成正整數
  h = h % SIZE;        // 計算雜湊值

  // 如果一開始找到的位置是空的，底下的 while 迴圈就不會被執行
  while (hashTable[h] != 0) {
    h++;        // 雜湊值每次加 1
    h %= SIZE;  // 更新後的雜湊值仍要限制在雜湊表的範圍內
  }
  hashTable[h] = n;  // 在找到的空位存入鍵值

  return h;  // 傳回雜湊值
}

int getHash(int n) {
  unsigned int h = n;
  h = h % SIZE;
  while (hashTable[h] != 0 && hashTable[h] != n) {
    h++;
    h %= SIZE;
  }
  return (hashTable[h] == 0) ? -1 : h;
}

int main() {
  printf("%d => %d\n", 996, setHash(996));  // 寫入雜湊值
  printf("%d => %d\n", 168, setHash(168));
  printf("%d => %d\n", 1, setHash(1));
  printf("%d => %d\n", 76, setHash(76));

  printf("%d <= %d\n", getHash(168), 168);  // 讀取雜湊值
  printf("%d <= %d\n", getHash(1), 1);
}
