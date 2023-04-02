// 參閱4-14頁
#include <stdio.h>

int main() {
  int n1, n2, diff;

  printf("請輸入兩個數字：");
  scanf("%d %d", &n1, &n2);

  // 若 n1>n2，則執行 n1-2，否則 n2-n1
  diff = (n1 > n2) ? n1 - n2 : n2 - n1;
  printf("兩者相差：%d", diff);
}