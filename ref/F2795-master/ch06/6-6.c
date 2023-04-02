#include <stdio.h>

int main() {  // 紀錄成績
  int scores[] = {83, 86, 81, 85, 90, 84, 89, 82, 88, 87};
  int size = sizeof(scores) / sizeof(int);  // 計算陣列元素的數量
  int total = 0;                            // 儲存總分
  float average;                            // 儲存平均

  for (int i = 0; i < size; i++) {
    total += scores[i];  // 加總分數
  }

  average = (float)total / size;  // 計算平均
  printf("人數：%d 人\n", size);
  printf("平均：%g 分\n", average);
}