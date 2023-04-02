// 參閱4-6頁
#include <stdio.h>

int main() {
  int age, diff;  // 宣告儲存年齡以及年紀差距的整數

  printf("請輸入年齡：");
  scanf("%d", &age);

  if (age < 18) {
    diff = 18 - age;  // 計算年齡差距
    printf("%d 年後再考吧～\n", diff);
  } else {
    printf("%d 歲可考領普通駕照。\n", age);
  }
}