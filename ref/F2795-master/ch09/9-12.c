#include <stdio.h>
#define NAME "冷淨牌"
#define ID 1357
#define AMP 1.2

int main() {
  printf("%s型號%d，功率%g瓦。\n", NAME, ID, 220 * AMP);
}