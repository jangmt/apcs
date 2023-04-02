#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式

typedef struct node_t {
  int data;  // 整數型態資料

  struct node_t *next;  // 下個節點的指標
} NODE;                 // 自訂型態名稱為 NODE

void printNode(NODE *pt) {
  int count = 0;  // 紀錄節點的編號和數量

  if (pt == NULL) {
    printf("這是空串列～");
  }

  while (pt != NULL) {
    printf("節點%d 的資料：%d\n", count, pt->data);
    count++;
    pt = pt->next;
  }

  printf("\n 總共%d 個節點。\n", count);
}

void addNode(NODE **head, int val) {
  NODE *pt = malloc(sizeof(NODE));
  pt->data = val;
  pt->next = *head;
  *head = pt;
}

int main() {
  NODE *head = NULL;  // 定義串列的「頭部」，指向「無」

  addNode(&head, 77);  // 從頭部新增一個節點
  addNode(&head, 88);
  addNode(&head, 99);

  printNode(head);
}