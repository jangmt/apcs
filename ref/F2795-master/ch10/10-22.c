#include <stdio.h>

typedef struct {
  char name[20];          // 角色的名字
  unsigned char HP : 4;   // 生命值
  unsigned char DP : 4;   // 防禦力
  unsigned char AP : 4;   // 攻擊力
  unsigned char AFK : 1;  // 掛機
} goose;

int main() {
  goose g = {"Groovy", 10, 8, 7, 0};
  g.HP = 9;  // 顯示 "Groovy 的生命值：9"

  printf("%s 的生命值：%d\n", g.name, g.HP);
  printf("防禦力：%d\n", g.DP);  // 顯示" 資料大小：22 位元組"
  printf("資料大小：%ld 位元組 ", sizeof(g));
}