#include <stdio.h>
int fanSpeed;

float power (int v, float i) {  // 功率函式
  return v * i; // 計算並傳回瓦數
}

void setFanSpeed(int speed) {
  fanSpeed += speed;  // 設定風速
  printf("風速：%d\n", fanSpeed);
}
