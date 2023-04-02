#include <stdio.h>
#include <stdlib.h>  // 內含配置記憶體的函式
#define SIZE 4       // 配置的空間數量

int main() {
  int i, *pt, *start;
  pt = (int*)malloc(sizeof(int) * SIZE);

  if (pt == NULL) {
    printf("malloc 分配記憶體錯誤～\n");
    return 1;  // 中止主程式
  }

  start = pt;  // 紀錄配置空間的起始位址
  for (i = 0; i < SIZE; i++) {
    pt[i] = i * 5;
  }

  for (i = 0; i < SIZE; i++) {
    printf("元素[%d]：%d\n", i, *pt);
    pt++;  // 指標移到下一個整數型態空間
  }

  free(start);
}