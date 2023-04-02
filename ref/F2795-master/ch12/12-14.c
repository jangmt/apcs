#include <stdio.h>

int main() {
  int n = 18;
  int *pt = &n;     // pt 指向 n；pt 存放 n 的位址
  int **dpt = &pt;  // dpt 指向 pt；dpt 存放 pt 的位址

  printf("%d\n", **dpt);  // 取出 dpt 指向內容所指向的值
}