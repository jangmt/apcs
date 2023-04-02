#include <stdio.h>

int main() {
  FILE* fp;                     // 宣告一個 FILE 型態的「檔案指標」變數
  fp = fopen("note.txt", "r");  // 以「唯讀」模式開啟 note.txt 檔

  if (fp == NULL) {
    printf("無法開啟檔案～");
  } else {
    printf("已開啟檔案");
    fclose(fp);  // 關閉檔案
  }
}