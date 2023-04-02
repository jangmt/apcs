// 參閱4-13頁
#include <stdio.h>

int main() {
  int n1, n2, diff;

  printf("請輸入兩個數字：");
  scanf("%d %d", &n1, &n2);

  if (n1 > n2) {     // 若 n1>n2
    diff = n1 - n2;  // 差值為 n1-n2
  } else {
    diff = n2 - n1;  // 否則，差值 n2-n1
  }

  printf("兩者相差：%d", diff);
}