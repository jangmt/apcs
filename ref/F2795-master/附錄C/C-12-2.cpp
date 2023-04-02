#include <iostream>

void price(int n, float tax = 1.05) {
  std::cout << "含稅：" << (float)n * tax << std::endl;
}

int main() {
  price(30);        // 顯示 "含稅：31.5"
  price(30, 1.02);  // 顯示 "含稅：30.6"
}