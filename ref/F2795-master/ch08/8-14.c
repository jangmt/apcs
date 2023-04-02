#include <stdio.h>

int main() {
  int data[] = {11, 22, 33, 44};

  printf("data 指向的位址：%p，大小：%ld\n", data, sizeof(data));
  printf("data 本身的位址：%p，大小：%ld\n", &data, sizeof(&data));
  printf(" data + 1：%p\n", data + 1);
  printf("&data + 1：%p\n", &data + 1);
}