#include <stdio.h>
#include <string.h>  // 內含 strlen() 函式

int main() {
  // 宣告被加數、加數、總和，預設為 0
  int num1[100] = {0}, num2[100] = {0}, sum[100] = {0};
  // 儲存使用者輸入的被加數和加數字串（多個 1 是為了儲存 '\0' 字尾）
  char s1[101], s2[101];  // 紀錄兩個字串長度、字元索引、進位值
  int len1, len2, i, carry = 0;
  printf("請輸入被加數：");
  scanf("%s", s1);
  printf("請輸入加數：");
  scanf("%s", s2);

  // 紀錄輸入字串的長度
  len1 = strlen(s1) - 1;
  len2 = strlen(s2) - 1;

  // 把字串轉成數字，個別存入陣列
  for (int j = 0, k = len1; k >= 0; j++, k--)
    num1[j] = s1[k] - '0';
  for (int j = 0, k = len2; k >= 0; j++, k--)
    num2[j] = s2[k] - '0';

  // 儲存較長字串的長度值
  int size = (len1 > len2) ? len1 : len2;  // 從個位數開始計算到長字串的最高位數
  for (i = 0; i <= size; i++) {
    int temp = carry + num1[i] + num2[i];  // 進位值+被加數+加數
    sum[i] = temp % 10;
    // 取得相加之後的個位數
    carry = temp / 10;
  }

  // 如果有進位…上面的 for 迴圈的 i++ 敘述，已令 i 指向下一個高位數
  if (carry > 0)
    sum[i] = carry;  // 在高位數中存入進位值
  else
    i--;

  printf("\n 答：");
  for (int k = i; k >= 0; k--)  // 從最後一個元素往前讀取到第 0 個
    printf("%d", sum[k]);
}