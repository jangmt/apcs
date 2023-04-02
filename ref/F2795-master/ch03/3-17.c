// 參閱3-17頁
#include <stdio.h>

int area(int, int);  // 函式原型宣告

int main() {
  printf("面積：%d\n", area(3));  // 僅傳入一個參數
}

int area(int w, int h) {
  return w * h;
}