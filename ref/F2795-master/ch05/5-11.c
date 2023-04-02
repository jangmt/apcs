// 參閱5-11頁
#include <stdio.h>

int main() {
  int n = 0;
  printf("請輸入 1～30 以內的數字：\n");
  scanf("%d", &n);

  if (n < 1 || n > 30) {  // 如果輸入值小於 1 或者大於 30…
    printf("請輸入 1～30 以內的數字：\n");
    scanf("%d", &n);
  }
  for (int y = 0; y < n; y++) {    // 外層迴圈決定列數（垂直方向）
    for (int x = 0; x < n; x++) {  // 內層迴圈決定行數（水平方向）
      printf("* ");
    }
    printf("\n");
  }
}