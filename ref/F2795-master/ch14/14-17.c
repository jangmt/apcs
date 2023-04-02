#include <stdio.h>
#define MAX_SIZE (5 + 1)  // 宣告佇列大小

typedef struct queue_t {
  int head;  // 開頭索引
  int tail;
  int data[MAX_SIZE];
} QUEUE;

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

void printQueue(QUEUE *q) {
  int size;  // 佇列的大小
  if (isQueueEmpty(q)) {
    printf("佇列是空的\n");
    return;
  }
  if (q->head <= q->tail) {  // 若頭 <= 尾
    size = q->tail - q->head + 1;
  } else {
    size = q->tail + MAX_SIZE - q->head + 1;
  }
  printf("佇列內容：");
  for (int i = 0; i < size; i++) {
    printf("%d ", q->data[(q->head + i) % MAX_SIZE]);
  }
  printf("\n");
}

int main() {
  int val;                // 儲存佇列元素值
  QUEUE q;                // 宣告佇列
  q.head = 0;             // 初始化佇列的開頭索引
  q.tail = MAX_SIZE - 1;  // 初始化佇列的尾端索引

  enqueue(&q, 2);  // 向佇列存入資料
  enqueue(&q, 5);
  enqueue(&q, 3);
  val = dequeue(&q);  // 從佇列取出一個值

  printf("佇列開頭的資料：%d\n", val);
  val = dequeue(&q);  // 從佇列取出一個值

  printf("佇列開頭的資料：%d\n", val);
  enqueue(&q, 6);
  enqueue(&q, 7);
  printQueue(&q);  // 列舉所有佇列內容
}