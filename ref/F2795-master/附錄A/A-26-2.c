#include <stdio.h>

int main() {
  int n = 5, fact, i;

  for (i = 1; i <= n; i++)
    fact *= i;

  printf("%d! = %d", n, fact);
}