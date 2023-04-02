#include <stdio.h>

int n;

// 遞迴計算人數，因所有陣列都是區域變數，
// 所以呼叫此函式時，需要傳入陣列
int weight(int v, int w[], int L[], int R[]) {
  if (v >= n)
    return w[v];  // 這是葉節點

  w[v] = weight(L[v], w, L, R) + weight(R[v], w, L, R);
  return w[v];
}

int main() {
  int m, i;
  scanf("%d%d", &n, &m);

  int w[n * 2];    // 儲存旅行團初始人數
  int in[m];       // 儲存依序報名的人數
  int L[n], R[n];  // 左、右子節點

  for (i = n; i < n * 2; i++)  // 讀入旅行團初始人數
    scanf("%d", &w[i]);

  for (i = 0; i < m; i++)  // 讀入依序報名人數
    scanf("%d", &in[i]);

  for (i = 0; i < n - 1; i++) {
    int v;
    scanf("%d", &v);
    scanf("%d%d", &L[v], &R[v]);
  }

  weight(1, w, L, R);        // 遞迴搜尋，根節點=1
  for (i = 0; i < m; i++) {  // 開始測試
    int v = 1;

    while (v < n) {  // 直至抵達葉節點
      if (w[L[v]] <= w[R[v]])
        v = L[v];  // 往左子節點
      else
        v = R[v];  // 往右子節點

      w[v] += in[i];
    }

    if (i > 0)
      printf(" ");  // 輸出空格

    printf("%d", v);
  }
  printf("\n");  // 題目規定用新行結尾
}