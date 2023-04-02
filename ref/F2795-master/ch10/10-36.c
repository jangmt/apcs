#include <stdio.h>

int main() {
  int a, b, c, pass = 0;
  scanf("%d %d %d", &a, &b, &c);

  if (a != 0)
    a = 1;  // 若輸入值非 0，則設為 1

  if (b != 0)
    b = 1;

  if ((a & b) == c) {
    printf("AND\n");
    pass = 1;  // 代表通過測試
  }

  if ((a | b) == c) {
    printf("OR\n");
    pass = 1;
  }

  if ((a ^ b) == c) {
    printf("XOR\n");
    pass = 1;
  }

  if (!pass)
    printf("IMPOSSIBLE\n");
}
