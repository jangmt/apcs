#include <stdio.h>  // 內含printf()
extern unsigned int fanSpeed;

float power(int v, float i) {  // 功率函式
  return v * i;                // 計算並傳回瓦數
}

void setFanSpeed(int speed) {
  fanSpeed += speed;
  printf("風速：%d\n", fanSpeed);
}

void sleep() {
  printf("進入睡眠模式");
}