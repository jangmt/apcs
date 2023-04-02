#include <stdio.h>
#include <string.h>
// 取較大值的巨集指令
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int lcs(char *s1, char *s2, int l1, int l2) {
  int t[l1 + 1][l2 + 1];  // 宣告儲存資料的表格（2 維陣列）

  for (int i = 0; i <= l1; i++) {  // 填寫表格
    for (int j = 0; j <= l2; j++) {
      if (i == 0 || j == 0)
        t[i][j] = 0;
      else if (s1[i - 1] == s2[j - 1])  // 若發現相同字元
        t[i][j] = 1 + t[i - 1][j - 1];  // 1+ 左上方格
      else                              // 字元不同…取左邊與上方格，最大者
        t[i][j] = MAX(t[i - 1][j], t[i][j - 1]);
    }
  }

  return t[l1][l2];  // 答案在最後一格
}

int main() {
  char s1[] = "KNFGT";
  char s2[] = "NCFT";
  int l1 = strlen(s1);  // 字串長度
  int l2 = strlen(s2);

  printf("LCS 長度：%d\n", lcs(s1, s2, l1, l2));
}