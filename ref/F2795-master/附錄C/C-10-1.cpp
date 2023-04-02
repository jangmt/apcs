#include <iostream>
#include <string>

int main() {
  std::string str = "hello";  // 定義 sting 型態的字串物件
  str += ", world";           // 串接字串

  std::cout << str;  // 輸出："hello, world"
}