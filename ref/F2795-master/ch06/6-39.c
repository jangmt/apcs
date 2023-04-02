#include <stdio.h>
#define ROCK 0      // 定義常數，石頭
#define SCISSORS 2  // 剪刀
#define PAPER 5     // 布

int main() {
  int f, n, i;      // 宣告儲存使用者出拳、回合數以及迴圈索引的變數
  scanf("%d", &f);  // 讀取使用者第一回合的出拳
  scanf("%d", &n);  // 讀取回合數
  int arr[n];       // 宣告儲存電腦出拳內容的 n 大小陣列 arr

  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) {  // 從 arr 陣列的元素 0 比對到最後
    if (i > 0) {             // 從第 2 輪開始到最後
      if (i == 1) {          // 如果是第 2 輪
        f = arr[i - 1];      // 這次出的拳，就是電腦上一次的拳
      } else if (arr[i - 1] == arr[i - 2]) {
        // 如果不是第 2 輪，且電腦前兩拳相同
        // 玩家將出贏過「上一次」電腦出的拳
        if (arr[i - 1] == SCISSORS) {     // 如果上一次是剪刀
          f = ROCK;                       // 玩家出石頭
        } else if (arr[i - 1] == ROCK) {  // 如果上一次是石頭
          f = PAPER;                      // 玩家出布
        } else {                          // 否則（剩下布）
          f = SCISSORS;                   // 玩家出剪刀
        }
      }
    }

    printf("%d ", f);                   // 顯示玩家出的拳，後面空一格
    if (f != arr[i]) {                  // 如果兩者的出拳不同（i 從 0 開始）…
      switch (f) {                      // 依據玩家的出拳…
        case SCISSORS:                  // 玩家出剪刀的情況：
          if (arr[i] == PAPER) {        // 如果電腦出布
            printf(": Won ");           // 玩家贏了
          } else if (arr[i] == ROCK) {  // 如果電腦出石頭
            printf(": Lost ");          // 玩家輸了
          }
          break;
        case ROCK:                       // 玩家出石頭的情況：
          if (arr[i] == SCISSORS) {      // 若電腦出剪刀
            printf(": Won ");            // 玩家贏了
          } else if (arr[i] == PAPER) {  // 若電腦出布
            printf(": Lost ");           // 玩家輸了
          }
          break;
        case PAPER:                         // 玩家出布的情況：
          if (arr[i] == ROCK) {             // 若電腦出石頭
            printf(": Won ");               // 玩家贏了
          } else if (arr[i] == SCISSORS) {  // 若電腦出剪刀
            printf(": Lost ");              // 玩家輸了
          }
          break;
      }
      // 顯示回合（i 從 0 開始，所以加 1）
      printf("at round %d", i + 1);
      break;  // 若已比出輸贏，即可跳出迴圈，不用再比較
    }
  }

  // 若索引 i 和回合（陣列元素數量）相同，
  // 代表到最後都沒有輸贏
  if (i == n) {
    // 顯示在第 n 回合以平手結束
    printf(": Drew at round %d\n", n);
  }
}