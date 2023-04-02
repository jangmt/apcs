#include <stdio.h>

typedef struct beverage {
  char *name;
  int price;
} drink;

void drinkInfo(drink d) {
  printf("%s 定價 %d 元\n", d.name, d.price);
}

int main() {
  drink tea = {"烏龍茶", 35};
  drinkInfo(tea);
}