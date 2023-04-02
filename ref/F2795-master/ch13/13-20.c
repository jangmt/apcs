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

/*
searchNode：搜尋節點
參數 1：root，根節點的位址
參數 2：val，搜尋目標的整數值
傳回值：找到節點的位址或 NULL 代表查無資料
*/
NODE *searchNode(NODE *root, int val) {
  NODE *node = root;

  while (node != NULL) {             // 若節點不是 NULL
    if (val < node->value) {         // 若「值」小於「目前節點的值」
      node = node->left;             // 指向「目前的左子節點」
    } else if (val > node->value) {  // 若「值」大於「目前節點的值」
      node = node->right;            // 指向「目前的右子節點」
    } else {
      return node;
    }
  }

  // 執行到此，代表 while 迴圈遇到 NULL，沒找到目標值
  return NULL;
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

/* addNode：新增節點
   參數 node：節點的位址或者輸入 NULL 新建節點
   參數 val：新節點的整數值
   參數 color：新節點的顏色字串
   傳回值：節點的位址
*/
NODE *addNode(NODE *node, int val, char color[]) {
  // 若第一個參數的值為 NULL，代表新增根節點
  if (node == NULL) {
    return createNode(val, color);  // 新增節點並傳回節點的位址
  }
  while (1) {
    if (val < node->value) {                  // 若新值小於節點值…
      if (node->left == NULL) {               // 若此節點沒有左子節點…
        node->left = createNode(val, color);  // 左子節點連到新增的節點
        break;                                // 離開迴圈
      }
      node = node->left;                       // 準備探詢左子節點
    } else if (val > node->value) {            // 若新值大於節點值…
      if (node->right == NULL) {               // 若此節點沒有右子節點…
        node->right = createNode(val, color);  // 右子節點連到新增的節點
        break;                                 // 離開迴圈
      }
      node = node->right;
    } else {
      printf("%d 已存在～\n", val);
      break;
    }
  }
  return node;
}

int main() {
  // 新增節點，一開始沒有根節點，所以第一個參數為 NULL
  // 建立根節點，要儲存它的位址
  NODE *root = addNode(NULL, 6, "藍");
  addNode(root, 4, "黃");  // 新增節點，可不儲存新節點的位址
  addNode(root, 7, "紫");
  addNode(root, 5, "綠");
  addNode(root, 3, "橙");
  addNode(root, 8, "灰");

  printNode(root, 0);  // 從根節點開始，走訪整個二元樹
}