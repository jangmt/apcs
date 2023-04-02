#include <stdio.h>
#include <stdlib.h>  // 內含配置記憶體的函式
#include <string.h>  // 內含處理字串的函式

int main() {
  char *url = (char *)malloc(8);

  strcpy(url, "swf.com");  // 複製 "swf.com" 到 url 空間

  url = (char *)realloc(url, 12);
  strcat(url, ".tw");  // 附加 ".tw" 到 url 空間

  printf("網域：%s\n", url);
  free(url);
}