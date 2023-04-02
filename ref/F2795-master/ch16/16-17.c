#include <stdio.h>

int main() {
  int m, n, i, x, start = 0, count = 0;
  int codes[200001] = {0};  // 儲存數字 m，最大值是 20 萬

  scanf("%d %d", &m, &n);
  for (i = 1; i <= n; i++) {  // 共有 n 個數字
    scanf("%d", &x);
    // 讀入一個數字
    if (start < codes[x]) start = codes[x];
    if (i - start == m) count++;
    codes[x] = i;
  }
  printf("%d\n", count);
}