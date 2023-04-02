#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "../img/a.png";
  char filename[50];
  char *t;

  t = strtok(str, "/");
  while (t != NULL) {
    printf("子字串：%s\n", t);
    strcpy(filename, t);
    t = strtok(NULL, "/");
  }

  printf("檔名：%s\n", filename);
}