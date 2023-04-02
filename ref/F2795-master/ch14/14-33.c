#include <stdio.h>
#define INFINITY 9999
#define NUM 5

void dijkstra(int graph[NUM][NUM]) {
  int cost[NUM][NUM], dist[NUM];
  int visited[NUM], minDist, nextNode, i, j, count;

  for (i = 0; i < NUM; i++)
    for (j = 0; j < NUM; j++)
      if (graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = graph[i][j];
  for (i = 0; i < NUM; i++) {
    dist[i] = cost[0][i];
    visited[i] = 0;
  }

  dist[0] = 0;     // 到原點的距離為 0
  visited[0] = 1;  // 原點設為「已走訪」
  count = 1;       // 紀錄已走訪的節點數量

  /*
  共 5 個節點，0 是起點，最後一個元素是 4（n-1）
  所以 while 迴圈從 1~3：
   */
  while (count < NUM - 1) {
    minDist = INFINITY;  // 最短距離預設為無窮大

    for (i = 0; i < NUM; i++) {
      // 如果距離小於「目前最短距離」且「未走過」
      if (dist[i] < minDist && !visited[i]) {
        minDist = dist[i];  // 設為「目前最短距離」
        nextNode = i;
      }
    }
    visited[nextNode] = 1;
    for (i = 0; i < NUM; i++) {
      if (!visited[i]) {  // 最短距離
        // 「最短距離」設為「已走訪」 // 如果尚未走訪…
        if (minDist + cost[nextNode][i] < dist[i]) {
          dist[i] = minDist + cost[nextNode][i];
        }
      }
    }
    count++;
  }
  for (i = 0; i < NUM; i++) {
    if (i != 0) {
      printf("\n 從原點到 %d 的距離：%d", i, dist[i]);
    }
  }
}
int main() {
  int graph[NUM][NUM] = {
      {0, 3, 4, 7, 0},
      {3, 0, 0, 0, 5},
      {4, 0, 0, 1, 6},
      {7, 0, 1, 0, 2},
      {0, 5, 6, 2, 0}};

  dijkstra(graph);
}