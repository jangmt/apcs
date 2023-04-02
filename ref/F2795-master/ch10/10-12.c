#include <stdio.h>

typedef struct {
  char *name;  // 品名
  int price;   // 價格
} drink;

int main() {
  drink tea;
  drink *pt;
  pt = &tea;  // pt 指向 tea 結構體的起始位址

  pt->name = "抹茶";  // 取出結構體裡的 name 成員
  pt->price = 45;     // 取出結構體裡的 price 成員
  printf("%s 定價 %d 元\n", pt->name, pt->price);
}