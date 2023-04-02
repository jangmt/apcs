#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("這個程式的名字：%s\n", argv[0]);

  if (argc >= 2) {
    printf("收到 %d 個參數：\n", argc);

    for (int i = 0; i < argc; i++)
      printf("argv[%d]：%s\n", I, argv[i]);
  }
}