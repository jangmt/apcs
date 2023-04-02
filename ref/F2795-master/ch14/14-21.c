#include <stdio.h>
#define N 6               // 節點數
#define MAX_SIZE (N + 1)  // 宣告佇列大小

int graph[N][N] = {
    {0, 1, 0, 0, 1, 0},  // 節點 0
    {1, 0, 1, 0, 0, 0},  // 節點 1
    {0, 1, 0, 1, 1, 1},  // 節點 2
    {0, 0, 1, 0, 0, 0},  // 節點 3
    {1, 0, 1, 0, 0, 1},  // 節點 3
    {0, 0, 1, 0, 1, 0},  // 節點 5
};

typedef struct queue_t {
  int head;            // 開頭索引
  int tail;            // 尾端索引
  int data[MAX_SIZE];  // 佇列資料
} QUEUE;               // 宣告自訂的佇列型態

void enqueue(QUEUE *q, int n);  // 把資料加入佇列
int dequeue(QUEUE *q);          // 把資料移出佇列
int isQueueEmpty(QUEUE *q);     // 確認佇列是否為空
int isQueueFull(QUEUE *q);      // 確認佇列是否滿了
void bfs(QUEUE *q);             // 進行廣度優先走訪

int main() {
  QUEUE q;
  q.head = 0;
  q.tail = -1;
  bfs(&q);
}

void bfs(QUEUE *q) {
  int n, i;
  int visited[N] = {0};  // 「已造訪」陣列，預設 0
  enqueue(q, 0);         // 節點 0 排入佇列
  visited[0] = 1;        // 節點 0，已走訪

  printf("走訪節點：");
  while (!isQueueEmpty(q)) {  // 直到佇列為空…
    n = dequeue(q);           // 取出佇列裡的節點

    printf("%d ", n);          // 顯示節點編號
    for (i = 0; i < N; i++) {  // 查看該節點的相連節點
      // 若有相連節點 且 尚未走訪
      if (graph[n][i] == 1 && visited[i] == 0) {
        enqueue(q, i);
        // 排入佇列
        visited[i] = 1;
      }
    }
  }
  printf("\n");
}

// 若佇列為空，則傳回 1，否則傳回 0
int isQueueEmpty(QUEUE *q) {
  if ((q->tail + 1) % MAX_SIZE == q->head) {
    return 1;
  }
  return 0;
}

// 若佇列滿了，則傳回 1，否則傳回 0
int isQueueFull(QUEUE *q) {
  if ((q->tail + 2) % MAX_SIZE == q->head) {
    return 1;
  }
  return 0;
}

/*
  把資料加入佇列
  參數 1：指向佇列結構變數
  參數 2：要存入佇列的整數值
*/
void enqueue(QUEUE *q, int n) {
  int tailIndex;  // 尾端的索引編號

  if (isQueueFull(q)) {
    printf("佇列滿了 \n");
    return;
  }
  tailIndex = (q->tail + 1) % MAX_SIZE;  // 計算新增元素的索引位置
  q->data[tailIndex] = n;                // 在尾端存入資料
  q->tail = tailIndex;                   // 變更尾端索引編號
}

int dequeue(QUEUE *q) {   // 把資料移出佇列
  int val;                // 元素值
  if (isQueueEmpty(q)) {  // 若佇列為空，則結束函式

    printf("佇列是空的 \n");
    return -1;
  }

  val = q->data[q->head];              // 讀取開頭資料
  q->head = (q->head + 1) % MAX_SIZE;  // 變更開頭索引
  return val;                          // 傳回元素值
}