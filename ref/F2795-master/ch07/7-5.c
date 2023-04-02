#include <stdio.h>

int sum(int n) {  // 計算加總
  if (n == 1)
    return 1;
  else
    return n + sum(n - 1);  // 呼叫自己
}

int main() {
  int n;    // 暫存使用者輸入的數字
  int ans;  // 儲存計算結果

  printf("計算整數 1 到 N 的和，請輸入 N 值：");
  scanf("%d", &n);
  ans = sum(n);
  printf("1 到%d 的和：%d\n", n, ans);
}