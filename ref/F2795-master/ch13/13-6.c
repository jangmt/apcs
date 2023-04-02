#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式

typedef struct node_t {
  int *pt;    // 指向子節點陣列
  int child;  // 子節點數量
} NODE;       // 宣告 NODE 型態

void printNodes(NODE *t, int n);  // 宣告走訪節點的自訂函式

int main() {
  int n, k, i, j;
  scanf("%d", &n);  // 讀取節點數量
  NODE t[n + 1];    // 宣告儲存節點的陣列
  int pa[n + 1];    // 紀錄根節點

  for (i = 0; i <= n; i++) {
    t[i].pt = NULL;  // 預設沒有子節點
    t[i].child = 0;  // 預設子節點數為 0
    pa[i] = 0;       // 每個元素都預設為 0
  }

  for (i = 1; i <= n; i++) {
    scanf("%d", &k);  // 讀取子節點數量
    t[i].child = k;   // 儲存子節點數量
    // 動態宣告儲存子節點的陣列
    int *arr = (int *)malloc(sizeof(int) * k);
    for (j = 0; j < k; j++) {
      scanf("%d", &arr[j]);  // 讀取子節點編號
      pa[arr[j]] = i;        // 以子節點編號當作索引，存入根節點編號
    }
    t[i].pt = arr;  // 指向子節點陣列
  }

  printNodes(t, n);  // 列出所有節點資料
  // 從元素 1 開始，找出其值為 0 者，即是根節點
  for (i = 1; i <= n; i++) {
    if (pa[i] == 0) {
      break;
    }
  }

  printf("根節點：%d\n", i);
  for (i = 1; i <= n; i++) {
    free(t[i].pt);
  }
}

// 走訪所有節點的自訂函式
void printNodes(NODE *t, int n) {
  int i, j;

  for (i = 1; i <= n; i++) {  // 從節點陣列 1 取到最後一個元素…
    int child = t[i].child;   // 取得子節點數量
    int *arr = t[i].pt;       // 指向子節點陣列

    printf("%d ", child);
    for (j = 0; j < child; j++) {
      printf("%d ", arr[j]);  // 顯示每個子節點編號
    }
    printf("\n");
  }
}