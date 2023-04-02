// 參閱4-33頁
#include <stdio.h>

int main() {
  int n, flag = 0;

  printf("請輸入一個正整數：\n");
  scanf("%d", &n);

  if (n <= 1) {
    printf("0 和 1 都不是質數。");
  } else if (n == 2) {
    printf("2 是質數。");
  } else {  // i 從 3 開始，每檢測一次，i 加 2
    for (int i = 3; i < n; i += 2) {
      if (n % i == 0) {  // 如果 n 可以被 i 整除…
        flag = 1;
        break;  // 不必再測試，離開迴圈
      }
    }

    if (flag == 0)
      printf("%d 是質數。", n);
    else
      printf("%d 不是質數。", n);
  }
}