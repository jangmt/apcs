#include <stdio.h>

typedef unsigned int u_int;
typedef struct beverage {
  char *name;   // 品名
  u_int price;  // 價格
} drink;

int main() {
  drink soda;  // 宣告 drink 型態變數
  drink tea = {"綠茶", 35};
  soda = tea;  // 把 tea 複製給 soda

  printf("複製資料\n");
  printf("tea: %s 定價 %d 元\n", tea.name, tea.price);
  printf("soda: %s 定價 %d 元\n", soda.name, soda.price);

  soda.name = "無糖可樂";
  soda.price = 25;
  printf("修改資料\n");
  printf("tea: %s 定價 %d 元\n", tea.name, tea.price);
  printf("soda: %s 定價 %d 元\n", soda.name, soda.price);
}