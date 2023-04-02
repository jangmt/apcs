#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式

typedef struct node_t {
  int data;  // 整數型態資料

  struct node_t *next;  // 下個節點的指標
} NODE;                 // 自訂型態名稱為 NODE

static NODE *head = NULL;  // head 是全域變數

void appendNode(int val) {  // 接收一個「節點資料」參數
  NODE *pt, *temp;
  temp = (NODE *)malloc(sizeof(NODE));
  temp->data = val;
  temp->next = NULL;

  if (head == NULL) {
    head = temp;
    return;
  }

  pt = head;                  // 紀錄串列的開頭
  while (pt->next != NULL) {  // 一直巡覽到末端的節點…
    pt = pt->next;
  }
  pt->next = temp;
}

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

void addNode(int val) {
  NODE *pt = (NODE *)malloc(sizeof(NODE));

  pt->data = val;
  pt->next = head;
  head = pt;
}

int main() {
  appendNode(55);
  appendNode(66);
  printNode();
}