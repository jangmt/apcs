#include <stdio.h>

#include "air.h"

static void sleep();

int main() {
  printf("品名：%s\n", AIR_NAME);
  printf("型號：%d\n", AIR_ID);
  sleep();
}

void sleep() {
  printf("失眠中");
}