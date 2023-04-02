// 參閱4-32頁
#include <stdio.h>

int main() {
  int n = 5;     // 要評估的數字
  int flag = 0;  // 紀錄 n 是否可被某數整除，預設 0 代表否

  for (int i = 2; i < n; i++) {  // i 從 2 到 n-1，每次加 1…
    if (n % i == 0) {            // 如果 n 可以被 i 整除…
      flag = 1;
    }
  }

  if (flag == 0) {  // 若執行到此 flag 仍是 0，代表 n 是質數
    printf("%d 是質數。", n);
  } else {
    // 否則，n 不是質數
    printf("%d 不是質數。", n);
  }
}