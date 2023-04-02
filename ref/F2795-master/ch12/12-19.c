#include <stdio.h>
#include <stdlib.h>  // 內含 strtol() 函式宣告

int main(int argc, char *argv[]) {
  long int sum = 0;

  if (argc > 1) {                     // 確認參數是否超過一個…
    for (int i = 1; i < argc; i++) {  // 從參數[1]開始加總
      long n = strtol(argv[i], NULL, 10);
      sum += n;
    }
  }
  printf("總和：%ld\n", sum);
}