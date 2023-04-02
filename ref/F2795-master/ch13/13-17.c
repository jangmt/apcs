#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式
#include <string.h>  // 內含 strcpy 函式

typedef struct node_t {
  int value;
  char color[10];
  struct node_t *left;
  struct node_t *right;
} NODE;

NODE *createNode(int val, char color[]) {
  NODE *node = (NODE *)malloc(sizeof(NODE));
  if (node != NULL) {
    node->left = NULL;  // 左右子節點的指標預設為「空」
    node->right = NULL;
    node->value = val;           // 設定節點的 value 整數成員值
    strcpy(node->color, color);  // 複製字串到節點的 color 成員
  }
  return node;
}

void dash(int level) {  // 顯示指定階層深度的虛線
  for (int i = 0; i < level; i++) {
    printf("--");
  }
}

void printNode(NODE *node, int level) {
  if (node == NULL) {
    dash(level);
    printf("無\n");
    return;  // 結束遞迴
  }
  dash(level);
  printf("[ %d | %s ]\n", node->value, node->color);
  dash(level);
  printf("左子節點：\n");
  printNode(node->left, level + 1);  // 遞迴列舉左子節點
  dash(level);
  printf("右子節點：\n");
  printNode(node->right, level + 1);  // 遞迴列舉右子節點
  printf("\n");
}

int main() {
  NODE *n0 = createNode(6, "藍");  // 設置子節點
  NODE *n1 = createNode(4, "黃");
  NODE *n2 = createNode(5, "綠");
  NODE *n3 = createNode(3, "橙");
  NODE *n4 = createNode(7, "紫");

  n0->left = n1;  // 組織二元樹
  n0->right = n4;
  n1->left = n3;
  n1->right = n2;
  printNode(n0, 0);  // 從 n0 節點開始走訪全部子節點
}