#include <stdio.h>
#include <stdlib.h>

int main() {
  char *pt, *txt = "165cm";
  long n = strtol(txt, &pt, 0);

  printf("%ld\n", n);  // 顯示轉換成數字的值
  printf("%s\n", pt);  // 顯示數字後面的字串
}