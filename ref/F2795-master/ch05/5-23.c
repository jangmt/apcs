// 參閱5-23頁
#include <math.h>
#include <stdio.h>

int main() {
  int num, temp;
  int n = 0, result = 0;

  printf("請輸入一個整數：");
  scanf("%d", &num);  // 內含 pow 函式
  temp = num;         // 暫存輸入值

  for (n = 0; temp != 0; n++) {
    temp /= 10;  // 求數字的位數
  }

  for (temp = num; temp != 0; temp /= 10) {
    int rem = temp % 10;  // 取得各個位數的數字

    result += pow(rem, n);  // 計算位數數字的 n 次方
  }

  if (result == num)
    printf("%d 是阿姆斯壯數。\n", num);
  else
    printf("%d 不是阿姆斯壯數。\n", num);
}