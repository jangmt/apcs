#include <stdio.h>
#include "lib/air.h"

int main(){
  printf("品名：%s\n", AIR_NAME);
  printf("型號：%d\n", AIR_ID);
  printf("功率：%gW\n", power(220, 1.2));
  setFanSpeed(2);  // 設定風速
}
