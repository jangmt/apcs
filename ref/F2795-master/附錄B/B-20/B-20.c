#include <stdio.h>

int main() {
  FILE *fp = fopen("data.csv", "r");
  int rank;       // 排名
  char name[50];  // 姓名
  float avg;      // 平均

  if (fp == NULL) {
    printf("找不到檔案！");
    return 1;
  }

  while (!feof(fp)) {  // 若游標未抵達檔案結尾…
    fscanf(fp, "%d, %49[^, ], %f\n", &rank, name, &avg);
    printf("第%d 名 %s 平均%.1f 分 \n", rank, name, avg);
  }

  fclose(fp);  // 關閉檔案
}