// 參閱5-26頁
#include <stdio.h>

int main() {
  int a, b, c, temp, ab, cc;

  printf("請輸入三角形的三邊長：");  // 這一行可以省略
  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {  // 由小到大排序 a, b, c
    temp = a;
    a = b;
    b = temp;
  }
  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }
  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (a + b <= c) {  // 無法構成三角形
    printf("No");
    return 0;  // 不用再往下執行了
  }

  ab = a * a + b * b;  // 帶入公式計算
  cc = c * c;

  if (ab < cc) {
    printf("Obtuse");
  } else if (ab != cc) {
    printf("Acute");
  } else {
    printf("Right");
  }
}