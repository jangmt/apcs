#include <stdio.h>

typedef struct {
  char *name;
  int price;
} drink;

void drinkInfo(drink *pt) {
  printf("%s 定價 %d 元\n", pt->name, pt->price);
}

int main() {
  drink tea = {"茉莉花茶", 40};  // 定義結構體變數
  drinkInfo(&tea);               // 傳址呼叫
}