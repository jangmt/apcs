#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
  int data;             // 整數型態資料
  struct node_t *next;  // 下個節點的指標
} NODE;                 // 自訂型態名稱為 NODE

NODE *head = NULL;  // 定義指向串列開頭的全域變數，指向「無」

int main() {  // 建立第一個節點，讓 head 指向它
  head = (NODE *)malloc(sizeof(NODE));
  head->data = 99;
  head->next = (NODE *)malloc(sizeof(NODE));  // 串接下一個節點
  head->next->data = 88;                      // 串接下一個節點
  head->next->next = (NODE *)malloc(sizeof(NODE));
  head->next->next->data = 77;
  head->next->next->next = NULL;

  printf("節點 0 資料：%d\n", head->data);
  printf("節點 1 資料：%d\n", head->next->data);
  printf("節點 2 資料：%d\n", head->next->next->data);
}