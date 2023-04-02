#include <stdio.h>
#include <stdlib.h>  // 內含 strtol() 函式宣告

int main() {
  char *pt, *txt = "$37";
  long n;

  n = strtol(txt, &pt, 10);
  if (*pt != '\0') {  // 判斷 pt 指向的值
    printf("字串包含非數字 \n");
    return -1;
  }
  printf("數字值：%ld\n", n);
}