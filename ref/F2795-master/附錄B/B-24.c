#include <stdio.h>

typedef struct {  // 學生資料結構體
  char name[20];
  int score;
} student;

void writeFile() {  // 以「寫入二進位」模式開檔
  FILE *fp = fopen("scores.dat", "wb");
  student st[] = {// 學生資料陣列
                  {"小明 ", 96},
                  {"小華 ", 91},
                  {"小新", 88}};
  int total = sizeof(st) / sizeof(student);  // 計算資料筆數
  printf("共 %d 筆資料 \n", total);
  fwrite(&st, sizeof(st), 1, fp);
  fclose(fp);
}

void readFile() {
  FILE *fp = fopen("scores.dat", "rb");
  student st;  // 學生資料
  while (fread(&st, sizeof(student), 1, fp)) printf("%s，%d 分 \n", st.name, st.score);
  fclose(fp);
}

int main() {
  writeFile();  // 寫入檔案
  readFile();   // 讀取檔案
}