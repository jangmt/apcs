#include <stdio.h>
#include <stdlib.h>      // malloc() 宣告在這裡
#define LOAD_FACTOR 1.3  // 雜湊表的大小，增大空間 30%

typedef struct code_t {
  int val;  // 數字值
  int pos;  // 出現位置
} CODE;

/*
  設定儲存關鍵數字的雜湊表
  參數 n：要存入的數字
  參數 pos：數字的出現位置
  參數 size：雜湊表大小
  參數 table[]：自訂結構體 CODE 型態的雜湊表陣列
*/
void setHash(int n, int pos, int size, CODE* table[]) {
  int h;
  h = n % size;
  while (table[h] != NULL) {
    h++;  // 計算 hash
    h %= size;
  }

  CODE* code = (CODE*)malloc(sizeof(CODE));
  code->val = n;
  code->pos = pos;
  table[h] = code;
}

/*
  取得輸入關鍵數字的索引（雜湊值）
  參數 size：雜湊表大小
  參數 table[]：自訂結構體 CODE 型態的雜湊表陣列
  參數 n：要查詢雜湊值的關鍵數字
  傳回值：關鍵數字的雜湊值, -1 表示不存在
*/
int getHash(int size, CODE* table[], int n) {
  int h = n % size;

  // 確認雜湊表中有此數字
  while (table[h] != NULL && table[h]->val != n) {
    h++;
    h %= size;
  }

  // 找不到時傳回 -1
  return (table[h] == NULL) ? -1 : h;
}

int main() {
  int m, n, i, x, count = 0, start = 0;
  scanf("%d %d", &m, &n);
  int data[n + 1];                 // 儲存原始輸入資料
  int size = m * LOAD_FACTOR + 1;  // 雜湊表的大小
  CODE* hashTable[size];           // 雜湊表

  for (i = 0; i < size; i++)
    hashTable[i] = NULL;  // 初始化雜湊表

  for (i = 1; i <= n; i++) {  // 初始化雜湊表
    scanf("%d", &x);          // 一一讀入數字
    data[i] = x;              // 數字原本對應到陣列的索引，在此要從「雜湊表」取得
    int index = getHash(size, hashTable, x);

    if (index != -1) {             // 數字之前出現過
      CODE* c = hashTable[index];  // 取得數字的結構體
      if (c->pos > start)          // 當前數列內出現過此數字
        start = c->pos;

      c->pos = i;
    } else {
      setHash(x, i, size, hashTable);  // 把數與對應位置存入雜湊表
    }

    if (i - start == m) {                   // 若數列長度等於 m 表示找到完美序列
      for (int j = start + 1; j <= i; j++)  // 印出找到的完美數列
        printf("%d ", data[j]);
      printf("\n");
      count++;  // 遞增找到的完美數列數量
    }
  }

  printf("%d\n", count);
}