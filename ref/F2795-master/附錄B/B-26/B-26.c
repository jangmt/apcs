#include <stdio.h>

int main() {
  FILE *from, *to;
  char data;
  char src[] = "nochi.png";        // 宣告兩個檔案指標 // 來源檔名
  char dest[] = "nochi_copy.png";  // 目的檔名 // 以「讀取」二進位模式開檔

  if ((from = fopen(src, "rb")) == NULL)
    return 1;  // 若開檔失敗則退出程式
               // 以「寫入」二進位模式開檔
  if ((to = fopen(dest, "wb")) == NULL)
    return 1;  // 若開檔失敗則退出程式
               // 從來源讀取 1 個位元組
  while (fread(&data, sizeof(data), 1, from))
    fwrite(&data, sizeof(data), 1, to);  // 寫入 1 個位元組到目的
  fclose(from);                          // 關閉來源檔

  fclose(to);
  printf("檔案複製完畢！");
}