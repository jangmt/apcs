#include <stdio.h>
#include <string.h>  // 內含 strlen（字串長度）函式
// 取較大值的巨集指令
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

/*
  傳回「最大共同子序列長度」的遞迴函式
  參數 s1：字串 1
  參數 s2：字串 2
  參數 l1：字串 1 長度
  參數 l2：字串 2 長度
*/
int lcs(char *s1, char *s2, int l1, int l2) {
  if (l1 == 0 || l2 == 0)  // 若其中一個字串長度為 0…
    return 0;
  if (s1[l1 - 1] == s2[l2 - 1])  // 若發現相同字元
                                 // 1+ 刪除兩個字串的結尾字元
    return 1 + lcs(s1, s2, l1 - 1, l2 - 1);
  else  // 若字元不同…分別刪除字串 1 和字串 2 的結尾字元
    return MAX(lcs(s1, s2, l1, l2 - 1), lcs(s1, s2, l1 - 1, l2));
}

int main() {
  char s1[] = "KNFGT";
  char s2[] = "NCFT";
  int l1 = strlen(s1);  // 字串 1 長度
  int l2 = strlen(s2);  // 字串 2 長度

  printf("LCS 長度：%d\n", lcs(s1, s2, l1, l2));
}