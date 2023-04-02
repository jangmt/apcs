#include <iostream>
#include <string>

int main() {
  std::string str = "hello";  // 定義 sting 型態的字串物件

  if (str == "hi") {  // 跟 "hi" 字串比較
    std::cout << "相同";
  } else {
    std::cout << "不一樣";
  }
}