#include <stdio.h>

int main() {
  int arr[10] = {[0 ... 9] = 5};  // 宣告與初始化陣列

  for (int i = 0; i < 10; i++)  // 列舉陣列所有元素
    printf("%d ", arr[i]);
}