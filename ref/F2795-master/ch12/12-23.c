#include <stdio.h>

typedef struct node_t {
  int data;
  struct node_t *next;
} NODE;  // 自訂「節點」資料型態

int main() {
  NODE *head;  // 宣告一個指向串列開頭的指標變數
  NODE node0;  // 宣告一個節點

  node0.data = 168;
  node0.next = NULL;
  head = &node0;
  printf("節點資料：%d\n", head->data);
}