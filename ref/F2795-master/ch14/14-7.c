#include <stdio.h>
#define N 5  // 節點數量

int graph[N][N] = {
    {0, 1, 0, 1, 0},  // 節點 0
    {1, 0, 1, 0, 1},  // 節點 1
    {0, 1, 0, 0, 1},  // 節點 2
    {1, 0, 0, 0, 0},  // 節點 3
    {0, 1, 1, 0, 0}   // 節點 4
};

int stack[N];    // 紀錄子節點的堆疊
int top = -1;    // 紀錄堆疊最上層元素位置
int visited[N];  // 紀錄已瀏覽的節點

void push(int n) {  // 資料存入堆疊
  stack[++top] = n;
}

int pop() {  // 從堆疊取出資料
  // 堆疊內容並沒有被清除，只是往下移動索引
  return stack[top--];
}

// 若堆疊為空（索引移到 0 以下），傳回 1，否則傳回 0
int isStackEmpty() {
  return top == -1;
}

void DFS() {  // 深度優先走訪
  int n = 0;  // 先取出第一個節點
  push(n);    // 節點值存入堆疊

  visited[n] = 1;  // 此節點設為已走訪
  printf("走訪節點：");

  while (!isStackEmpty()) {  // 重複執行到堆疊為空…
    n = pop();               // 取出堆疊裡的節點
    printf("%d ", n);        // 顯示節點編號

    for (int i = 0; i < N; i++) {  // 查看相鄰節點
      // 若有相鄰節點 且 尚未走訪
      if (graph[n][i] == 1 && visited[i] == 0) {
        push(i);         // 將此節點存入堆疊
        visited[i] = 1;  // 並設為「已走訪」
      }
    }
  }
}

int main() {
  DFS();
}