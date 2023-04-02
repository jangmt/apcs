#include <iostream>

namespace mac {
int price = 30;
void hello() {
  std::cout << "hello\n";
}
}  // namespace mac

namespace pc {
int price = 27;
}

int main() {
  std::cout << "Mac 價格：" << mac::price << std::endl;
  std::cout << "PC 價格：" << pc::price << std::endl;
  mac::hello();  // 呼叫位於 mac 命名空間裡的 hello()
}