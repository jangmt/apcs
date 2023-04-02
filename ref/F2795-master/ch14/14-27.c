#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式

#define MAX(x, y) (((x) > (y)) ? (x) : (y))  // 取較大值的巨集指令

int lastChildIndex = 0;  // 子節點的起始索引全域變數
int max1, max2, dist;    // 兩個最大高度值，一個距離值

typedef struct node_t {  // 宣告自訂的 NODE 型態
  int* pt;               // 指向子節點陣列
  int numChild;
} NODE;

void saveNode(NODE* t, int* childs, int node, int index) {
  int numChild = index - lastChildIndex;  // 求取子節點數量
  int* arr = (int*)malloc(sizeof(int) * numChild);

  for (int i = 0; i < numChild; i++) {
    arr[i] = childs[lastChildIndex + i];  // 複製子節點資料
  }

  t[node].numChild = numChild;  // 子節點數量
  t[node].pt = arr;             // 指向子節點陣列
  lastChildIndex = index;       // 更新子節點的起始索引
}

/*
  計算兩個子樹的最大高度
  參數 1：節點陣列
  參數 2：節點編號
*/
int h(NODE* t, int index) {
  int temp = 0;
  int child = t[index].numChild;
  if (child == 0) {
    return 0;
  } else {
    int* arr = t[index].pt;
    if (child == 1) {
      return h(t, arr[0]) + 1;
    } else {
      for (int i = 0; i < child; i++) {
        temp = h(t, arr[i]) + 1;
        if (i == 0) {
          max1 = temp;
        } else if (i == 1) {
          if (temp <= max1) {
            max2 = temp;
          } else {
            max2 = max1;
            max1 = temp;
          }
        } else {
          if (temp >= max1) {
            max2 = max1;
            max1 = temp;
          } else if (temp > max2) {
            max2 = temp;
          }
        }
      }
      dist = MAX(dist, max1 + max2);
      return max1;
    }
  }
}

int main() {
  int i, n, node, child;
  int lastNode = -1;

  printf("請輸入節點數：");
  scanf("%d", &n);
  int childs[n];  // 暫存子節點
  NODE t[n];      // 宣告儲存節點的陣列，節點編號從 0 開始

  for (i = 0; i < n; i++) {
    t[i].pt = NULL;     // 預設沒有子節點
    t[i].numChild = 0;  // 預設子節點數為 0
  }

  printf("請輸入節點資料：");
  for (i = 0; i < n - 1; i++) {
    scanf("%d %d", &node, &child);
    childs[i] = child;  // 儲存子節點

    if (i == 0)
      lastNode = node;

    if (node != lastNode) {
      saveNode(t, childs, lastNode, i);
      lastNode = node;
    }
    // 處理到最後一筆都沒有變動的數據，參閱下文說明
    if (i == n - 2) {
      saveNode(t, childs, lastNode, i + 1);
    }
  }

  for (int i = 0; i < n; i++) {  // 從 1 到 n 節點…
    h(t, i);                     // 取得各節點的高度
  }

  printf("最長距離：%d\n", dist);
  for (i = 0; i < n; i++) {
    free(t[i].pt);
  }
}