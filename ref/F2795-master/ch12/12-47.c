#include <stdio.h>

int main() {
  int n, m, k, num = 0;

  printf("請輸入 N, M, K：");
  scanf("%d %d %d", &n, &m, &k);

  for (int i = n - k; i < n; i++) {  // 從剩餘 n-k 開始…
    num = (num + m) % (i + 1);
  }

  printf("贏家：%d\n", num + 1);
}