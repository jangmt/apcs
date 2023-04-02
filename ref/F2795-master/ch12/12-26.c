#include <stdio.h>
#include <stdlib.h>

typedef struct node_t {
  int data;             // 整數型態資料
  struct node_t *next;  // 下個節點的指標
} NODE;                 // 自訂型態名稱為 NODE

NODE *head = NULL;  // 定義指向串列開頭的全域變數，指向「無」

void printNode() {
  int count = 0;  // 紀錄節點的編號和數量
  NODE *pt;       // 指向串列結構型態的指標

  if (head == NULL) {
    printf("這是空串列～");
  }

  pt = head;            // 複製串列開頭節點的起始位址
  while (pt != NULL) {  // 持續執行到 pt 指向「空」為止…
    printf("節點%d 的資料：%d\n", count, pt->data);
    count++;
    pt = pt->next;  // 複製下一個節點的起始位址
  }

  printf("\n 總共%d 個節點。\n", count);
}

int main() {  // 建立第一個節點，讓 head 指向它
  head = (NODE *)malloc(sizeof(NODE));
  head->data = 99;
  head->next = (NODE *)malloc(sizeof(NODE));  // 串接下一個節點
  head->next->data = 88;                      // 串接下一個節點
  head->next->next = (NODE *)malloc(sizeof(NODE));
  head->next->next->data = 77;
  head->next->next->next = NULL;

  printNode();
}