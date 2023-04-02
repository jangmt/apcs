#include <stdio.h>
#include <string.h>  // 內含 strcmp() 函式

int main() {
  char ans[10];
  int r = 0;  // 儲存字串比較的結果

  printf("準備好了嗎？");
  scanf("%s", ans);
  r = strcmp(ans, "yes");  // 比較字串

  if (r == 0)
    printf("出發吧！\n");
  else
    printf("好，再等一下～\n");
}