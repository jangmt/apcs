#include <stdio.h>

int main() {
  int arr[2][3] = {{3, 6, 9}, {8, -2, 4}};

  for (int i = 0; i < 2; i++) {    // 兩列
    for (int j = 0; j < 3; j++) {  // 三行
      printf("%4d", arr[i][j]);
    }
    printf("\n");
  }
}