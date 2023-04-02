#include <stdio.h>
#include <stdlib.h>

typedef struct _line {
  int s;
  int e;
} LINE;

int cmp(const void *a, const void *b) {
  LINE *A = (LINE *)a;
  LINE *B = (LINE *)b;
  return (A->s - B->s);  // 昇冪排序
}

int main() {
  int n, start, end;
  int count = 0;
  scanf("%d", &n);
  LINE lines[n];  // 宣告 n 大小的陣列

  for (int i = 0; i < n; i++) {
    // 填入每個線段的起點和終點
    scanf("%d %d", &(lines[i].s), &(lines[i].e));
  }
  // 將區間的開始數值由小到大排序，
  qsort(lines, n, sizeof(LINE), cmp);
  for (int i = 0; i < n; i++) {
    start = lines[i].s;  // 起點值
    end = lines[i].e;    // 結尾值

    // 檢查 s 與 e 是否包含下一個區間的開始數值
    while ((i + 1 < n) && lines[i + 1].s < end) {
      if (lines[i + 1].e <= end)
        i++;  // 包含下一個區間的全部，忽略此區間

      else {
        // 未包含下個區間的全部但有重疊，
        // 將 end 改成下個區間的結束值
        end = lines[i + 1].e;
        i++;
      }
    }
    count = count + end - start;  // 此區間的範圍數值個數
  }
  printf("%d\n", count);
}