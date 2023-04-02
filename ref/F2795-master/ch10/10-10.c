#include <stdio.h>

typedef unsigned int u_int;
typedef struct {
  char *name;
  u_int price;
} drink;

int main() {
  drink dks[10];
  dks[0].name = "綠茶";
  dks[0].price = 35;
  dks[1].name = "紅茶";
  dks[1].price = 35;
  dks[2].name = "奶茶";
  dks[2].price = 45;
  dks[3].name = "氣泡水";
  dks[3].price = 25;

  for (int i = 0; i < 4; i++) {
    printf("%s 定價 %d 元\n", dks[i].name, dks[i].price);
  }
}