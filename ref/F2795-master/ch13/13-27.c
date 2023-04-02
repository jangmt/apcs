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

/*
 刪除沒有子節點的節點
 參數 root：根節點的位址
 參數 node：要刪除節點的位址
 參數 parent：要刪除節點的父節點的位址
*/
NODE *delNoChildNode(NODE *root, NODE *node, NODE *parent) {
  if (parent != NULL) {          // 如果有父節點…
    if (parent->left == node) {  // 如果父節點的「左子節點」指向此節點…
      parent->left = NULL;       // 父節點的「左子節點」設成 NULL
    } else {                     // 否則…
      parent->right = NULL;      // 父節點的「右子節點」設成 NULL
    }

    free(node);  // 釋放已複製資料的子節點
  } else {       // 若沒有父節點…
    free(node);
    root = NULL;  // 根節點設成 NULL
  }
  return root;
}

/*
  刪除有 1 個子節點的節點
  參數 root：根節點的位址
  參數 node：要刪除節點的位址
  參數 child：要刪除節點的子節點的位址
*/
NODE *delOneChildNode(NODE *root, NODE *node, NODE *child) {
  node->value = child->value;         // 複製子節點的整數資料
  strcpy(node->color, child->color);  // 複製子節點的色彩字串
  node->left = child->left;           // 複製子節點的「左子節點」指標
  node->right = child->right;         // 複製子節點的「右子節點」指標

  free(child);  // 釋放已複製資料的子節點
  return root;
}

/*
  刪除有 2 個子節點的節點
  參數 root：根節點的位址
  參數 node：要刪除節點的位址
*/
NODE *delTwoChildNode(NODE *root, NODE *node) {
  NODE *max;
  NODE *maxParent;
  max = node->left;  // 從左子節點中尋找最大值的節點
  maxParent = node;  // 指向最大值的父節點

  while (max->right != NULL) {  // 一直探索到沒有右子節點
    maxParent = max;            // 指向最大值的節點
    max = max->right;
  }
  printf("找到了最大值：%d\n", max->value);
  node->value = max->value;         // 複製最大值節點的資料給要刪除的節點
  strcpy(node->color, max->color);  // 複製色彩字串
  if (max->left == NULL) {          // 若最大值節點也沒有左子節點…
    // 執行「刪除沒有子節點的節點」函式
    root = delNoChildNode(root, max, maxParent);
  } else {
    // 執行「刪除有 1 個子節點的節點」函式
    root = delOneChildNode(root, max, max->left);
  }
  return root;
}

/*
  刪除節點
  參數 root：根節點的位址
  參數 val：要刪除節點的值
*/
NODE *delNode(NODE *root, int val) {
  NODE *node;
  NODE *parent;

  if (root == NULL) {
    return NULL;
  }
  node = root;
  parent = NULL;

  while (node != NULL) {
    if (val < node->value) {
      parent = node;
      node = node->left;
    } else if (val > node->value) {
      parent = node;
      node = node->right;
    } else {
      break;
    }
  }

  if (node == NULL) {  // 若找不到指定資料的節點…
    printf("找不到資料 %d\n", val);
    return root;
  }

  printf("刪除 [ %d | %s ] 節點 \n", node->value, node->color);

  if (node->left == NULL && node->right == NULL) {  // 沒有子節點
    root = delNoChildNode(root, node, parent);
  } else if (node->left != NULL && node->right == NULL) {  // 只有左子節點
    root = delOneChildNode(root, node, node->left);
  } else if (node->right != NULL && node->left == NULL) {  // 只有右子節點
    root = delOneChildNode(root, node, node->right);
  } else {  // 刪除有兩個子節點的節點
    root = delTwoChildNode(root, node);
  }
  return root;
}

int main() {
  NODE *result;                         // 儲存新增和刪除節點之後傳回的根節點位址
  NODE *root = addNode(NULL, 6, "藍");  // 新增根節點
  addNode(root, 4, "黃");               // 從 root（根節點）新增節點
  addNode(root, 5, "綠");
  addNode(root, 8, "灰");
  addNode(root, 3, "橙");
  addNode(root, 7, "紫");

  result = delNode(root, 4);  // 刪除節點 "4"
  printf("\n 刪除節點之後的二元樹：\n");
  if (result != NULL) {
    printNode(root, 0);
  }
}