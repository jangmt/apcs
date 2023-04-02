#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
  int id;
  struct _node *next;
} NODE;

NODE *head, *pt, *newNode;

int main() {
  int N, M, K, i, count;

  printf("請輸入 N, M, K：");
  scanf("%d %d %d", &N, &M, &K);

  // 建立包含所有參與者的環形串列
  head = malloc(sizeof(NODE));
  head->id = 1;
  pt = head;

  for (i = 2; i <= N; i++) {
    newNode = malloc(sizeof(NODE));
    pt->next = newNode;
    newNode->id = i;
    newNode->next = head;
    pt = newNode;
  }

  for (count = K; count > 0; count--) {
    for (i = 0; i < M - 1; ++i) {
      pt = pt->next;
    }
    pt->next = pt->next->next;
  }

  printf("贏家：%d\n", pt->next->id);
}