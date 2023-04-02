// 參閱4-33頁
#include <stdio.h>

int main() {
  int a, b;                // 紀錄積木編號
  int works, total = 0;    // 紀錄商品以及輸出總數
  scanf("%d %d", &a, &b);  // 讀入兩個積木編號，輸入的資料中間空一格
  scanf("%d", &works);     // 讀入作品數目

  for (int i = 0; i < works; i++) {  // 分析每個作品
    int num;                         // 紀錄積木的編號
    scanf("%d", &num);               // 讀取積木編號
    int A = 0, B = 0;                // 一個作品裡的積木 a 和 b 的數量

    while (num != 0) {     // 持續處理到輸入值為 0…
      if (num == a) A++;   // 是否「放入」積木編號 a？
      if (num == -a) A--;  // 是否「取出」積木編號 a？
      if (num == b) B++;   // 是否「放入」積木編號 b？
      if (num == -b) B--;  // 是否「取出」積木編號 b？

      scanf("%d", &num);  // 讀取下一個積木編號
    }
    if (A > 0 && B > 0) total++;
  }
  printf("%d\n", total);
}