#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))

int main() {
  printf("%d的立方= %d\n", 3 + 1, CUBE(3 + 1));
}