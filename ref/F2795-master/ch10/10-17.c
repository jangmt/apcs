#include <stdio.h>

typedef union {
  int i;
  float f;
} u_u;  // 自訂「聯合」型態，命名為 u_u

int main() {
  u_u data;     // 宣告自訂的「聯合」型態變數
  data.i = 86;  // 設定 union 變數的 i 成員（整數值）

  printf("i: %d\n", data.i);
  data.f = 3.14;              // 設定 union 變數的 f 成員（浮點值）
  printf("f: %g\n", data.f);  // 讀取浮點成員值
  printf("i: %d\n", data.i);  // 讀取整數成員值
}