#include <stdio.h>

typedef struct {
  char *name;
  int price;
} drink;

drink newDrink(char *n, int p) {
  drink drk;
  drk.name = n;
  drk.price = p;
  return drk;
}

int main() {
  drink tea;  // 宣告 drink 結構體型態變數

  tea = newDrink("金萱茶", 40);  // 傳回的結構體資料存入 tea
  printf("%s 定價 %d 元\n", tea.name, tea.price);
}