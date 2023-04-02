#include <iostream>

int main() {
  char t1[] = "hello";        // 定義陣列並設定其元素內容
  const char *t2 = " world";  // 宣告指向「字串實字」的指標

  std::cout << t1 << t2 << std::endl;
}