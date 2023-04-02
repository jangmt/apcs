#include <stdio.h>

int main() {
  int n, total = 0;
  scanf("%d", &n);  // 讀取 n 值
  int sushi[n];     // 宣告 n 個元素的壽司陣列

  for (int i = 0; i < n; i++) {
    scanf("%d", &sushi[i]);  // 儲存壽司編號
  }

  if (sushi[0] == 0) {    // 若第 0 個是空盤…
    sushi[0] = sushi[1];  // 複製第 1 個壽司編號
    total = sushi[0];     // 設定壽司編號
  }

  if (sushi[n - 1] == 0) {        // 若最後一個是空盤…
    sushi[n - 1] = sushi[n - 2];  // 複製倒數第 2 個壽司編號
    total += sushi[n - 1];        // 壽司編號加總
  }

  for (int i = 1; i < n - 1; i++) {       // 從第 1 盤檢查至倒數第 2 盤
    if (sushi[i] == 0) {                  // 若是空盤…
      if (sushi[i - 1] < sushi[i + 1]) {  // 若左邊 < 右邊
        sushi[i] = sushi[i - 1];          // 取左邊
      } else {
        sushi[i] = sushi[i + 1];  // 取右邊
      }
      total += sushi[i];  // 壽司編號加總
    }
  }
  printf("%d\n", total);  // 輸出壽司編號加總
}
