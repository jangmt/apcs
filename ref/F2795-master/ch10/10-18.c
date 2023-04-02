#include <stdio.h>
#include <string.h>  // 內含 strcpy() 函式

typedef struct {
  enum {  // 匿名的 enum，紀錄作用中的 union 型態
    INT,
    FLOAT,
    CHAR
  } typ;
  union {           // 匿名的 union 型態
    int id;         // 整數成員
    float avg;      // 浮點成員
    char name[10];  // 字元陣列成員
  } attr;
} u_u;

int main() {
  u_u data;                          // 宣告 u_u 結構體型態變數
  strcpy(data.attr.name, "Sophia");  // 設定字元陣列成員值
  data.typ = CHAR;                   // 把 union 的型態標示為 CHAR

  switch (data.typ) {  // 判斷作用中的 union 型態
    case INT:          // 若是整數成員
      printf("id 值：%d\n", data.attr.id);
      break;
    case FLOAT:  // 若是浮點成員
      printf("avg 值：%g\n", data.attr.avg);
      break;
    case CHAR:  // 若是字元成員
      printf("name 值：%s\n", data.attr.name);
      break;
  }
}