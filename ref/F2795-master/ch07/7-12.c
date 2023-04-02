#include <stdio.h>
#define MAX 5  // 堆疊元素上限

int stack[MAX];  // 宣告儲存堆疊的陣列變數
int top = -1;    // 定義最上層元素的編號

int isEmpty() {
  if (top == -1)
    return 1;
  else
    return 0;
}
int isFull() {
  if (top == (MAX - 1))
    return 1;
  else
    return 0;
}
void push(int data) {
  if (!isFull()) {
    stack[++top] = data;
  } else {
    printf("堆疊已滿，無法存入%d。\n", data);
  }
}
int pop() {
  if (!isEmpty()) {
    return stack[top--];
  } else {
    printf("堆疊是空的。\n");
  }
}

int main() {
  push(1);  // 存入資料
  push(3);
  push(5);
  push(7);
  push(9);
  push(13);

  printf("取出資料：\n");
  while (!isEmpty()) {
    int data = pop();
    printf("%d\n", data);
  }
}