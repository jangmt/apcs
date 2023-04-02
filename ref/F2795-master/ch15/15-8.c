#include <stdio.h>
// 取較大值的巨集指令
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int knapsack(int c, int w[], int v[], int n) {
  if (n == 0 || c == 0)
    return 0;

  // 若放入的寶石超出背包容量，則不納入考量
  if (w[n - 1] > c) {
    return knapsack(c, w, v, n - 1);
  } else {
    // 傳回這兩個情況中，較大價值者：
    // 「不拿寶石 n」以及「拿寶石 n」
    return MAX(
        knapsack(c, w, v, n - 1), v[n - 1] + knapsack(c - w[n - 1], w, v, n - 1));
  }
}

int main() {
  int w[] = {1, 2, 3};               // 物件體積
  int v[] = {6, 5, 4};               // 物件價值（value）
  int n = sizeof(w) / sizeof(w[0]);  // 寶石的數量
  int c = 5;

  // 背包容量（capacity）
  printf("最大價值：%d\n", knapsack(c, w, v, n));
}