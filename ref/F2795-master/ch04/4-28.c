// 參閱4-28頁
#include <stdio.h>

int main() {
  int i, j, n1, n2, k;

  printf("請輸入兩個數字：");
  scanf("%d%d", &i, &j);

  n1 = i;  // 備份輸入值
  n2 = j;
  if (j > i) {  // 確認大數和小數
    i += j;
    j = i - j;
    i -= j;
  }
  // 若小數不是 0，則持續計算
  while (j != 0) {
    k = i % j;
    i = j;
    j = k;
  }
  // 另一個數字是最大公因數
  printf("最大公因數：%d\n", i);
  printf("最小公倍數：%d\n", n1 * n2 / i);
}