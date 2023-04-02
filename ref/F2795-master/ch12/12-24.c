#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式

typedef struct node_t {
  int data;
  struct node_t *next;
} NODE;

int main() {
  // 動態建立一個串列節點
  NODE *node0 = (NODE *)malloc(sizeof(NODE));
  node0->data = 168;  // 設定節點資料

  node0->next = NULL;  // 代表沒有下一個節點
  printf("節點資料：%d\n", node0->data);
}