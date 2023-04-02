#include <stdio.h>

typedef unsigned int u_int;
typedef struct beverage {
  char *name;   // 品名
  u_int price;  // 價格
} drink;

int main() {
  drink tea = {"綠茶", 35};
  char *tName = tea.name;
  u_int tPrice = tea.price;
  printf("%s定價%d元\n", tName, tPrice);
}