#include <stdio.h>
#include <stdlib.h>  // 內含 abs() 函式

int main() {
  // 宣告變數：矩陣 A 的 s 列 t 行、矩陣 B 的 n 列 m 行、最小差 r
  int s, t, n, m, r;
  int total = 0;        // 統計差距離小於或等於 r 的數量
  int minDist = 99999;  // 最短距離值，預設先給定一個很大的數字
  scanf("%d %d %d %d %d", &s, &t, &n, &m, &r);
  int A[s][t];
  int B[n][m];
  int sumA = 0;  // 矩陣 A 值的加總

  // 讀取並儲存矩陣 A 和 B
  for (int i = 0; i < s; i++) {    // A 矩陣 s 列
    for (int j = 0; j < t; j++) {  // A 矩陣 t 行
      scanf("%d", &A[i][j]);
      sumA += A[i][j];  // 加總
    }
  }

  for (int i = 0; i < n; i++) {    // B 矩陣 n 列
    for (int j = 0; j < m; j++) {  // B 矩陣 m 行
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < n - s + 1; i++) {    // 子集合的垂直起點
    for (int j = 0; j < m - t + 1; j++) {  // 子集合的水平起點
      int diff = 0;                        // 距離
      int sumB = 0;                        // 矩陣 B 內的子集合的加總

      for (int y = 0; y < s; y++) {          // 子集合元素的垂直位置
        for (int x = 0; x < t; x++) {        // 子集合元素的水平位置
          if (B[y + i][x + j] != A[y][x]) {  // 若元素值不同…
            diff++;
            if (diff > r) {  // 若距離大於 r
              break;         // 不用再比，也不用加總元素值
            }
          }
          sumB += B[y + i][x + j];
        }
      }  // 子集合的元素比對完畢後…

      if (diff <= r) {               // 若距離數小於或等於 r…
        int sub = abs(sumA - sumB);  // 計算兩個矩陣的總和差

        total++;  // 統計距離數小於或等於 r 的數量

        if (sub < minDist)
          minDist = sub;  // 儲存矩陣總和差較小的那一個
      }
    }
  }

  printf("%d\n", total);

  if (total == 0)
    printf("-1\n");
  else
    printf("%d\n", minDist);  // 顯示最小總和差
}