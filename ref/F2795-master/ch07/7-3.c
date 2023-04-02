#include <stdio.h>

int main() {
  int n = 5;    // 儲存計算上限
  int ans = 0;  // 儲存計算結果

  // 從 1 開始，到 i 等於 n 結束，每次執行後 i+1
  for (int i = 1; i <= n; i++) {
    ans += i;  // 等同 ans = ans + i;
  }
}