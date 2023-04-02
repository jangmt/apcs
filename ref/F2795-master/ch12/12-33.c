#include <stdio.h>
#include <stdlib.h>  // 內含 malloc 函式
#include <string.h>

typedef struct node_t {
  int id, score;        // 學號和成績
  char *name;           // 姓名
  struct node_t *next;  // 下個節點的指標
} NODE;                 // 自訂型態名稱為 NODE

static NODE *head = NULL;  // head 是全域變數

// 在開頭新增節點：接收學號、姓名和成績 3 個參數，無傳回值
void addNode(int id, char name[], int score) {
  NODE *pt = malloc(sizeof(NODE));  // 新增節點
  pt->id = id;                      // 在新節點中存入學號
  pt->score = score;                // 存入成績

  pt->name = (char *)malloc(strlen(name) + 1);  // 配置儲存姓名的空間
  strcpy(pt->name, name);                       // 複製字串
  pt->next = head;                              // 把第一個節點的位址複製給新節點的 next
  head = pt;                                    // 開頭指向新節點
}

// 列舉所有節點
void printNode() {
  NODE *pt;  // 指向串列結構型態的指標

  if (head == NULL)
    printf("這是空串列～");
  pt = head;  // 紀錄串列開頭節點的起始位址

  while (pt != NULL) {  // 顯示姓名和成績
    printf("%s %d 分\n", pt->name, pt->score);
    pt = pt->next;  // 紀錄下一個節點的起始位址
  }
}

NODE *search(char name[]) {
  NODE *pt = head;
  while (pt != NULL) {  // 持續搜尋到串列結尾
    if (strcmp(pt->name, name) == 0) {
      return pt;
    }
    pt = pt->next;
  }
  return NULL;
}

int main() {
  addNode(1, "小明", 80);  // 從串列開頭新增節點
  addNode(2, "小華", 85);
  addNode(3, "小新", 87);
  printNode();  // 列舉所有節點

  NODE *pt = search("小華");  // 查詢" 小華"的成績
  if (pt != NULL) {
    printf("\n%s的成績：%d 分\n", pt->name, pt->score);
  } else {
    printf("\n 查無此人～\n");
  }
}