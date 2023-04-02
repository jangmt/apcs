#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pt = malloc(sizeof(int));
  *pt = 345;  // 在動態配置的空間中存入資料

  printf("動態配置空間的儲存值：%d\n", *pt);  // 顯示資料值
  free(pt);                                   // 釋放記憶體空間
  printf("空間釋放之後：%d\n", *pt);          // 嘗試讀取已釋放的空間
}