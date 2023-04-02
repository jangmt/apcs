#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("test.txt", "w");

  fputs("123\n", fp);
  fclose(fp);
}