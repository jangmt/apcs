#include <stdio.h>
#define VERSION 10

int main() {
#if VERSION < 10
  printf("版本小於10");
#elif VERSION == 10
  printf("版本等於10");
#else
  printf("版本大於10");
#endif
}