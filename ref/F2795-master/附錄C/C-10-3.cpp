#include <iostream>
#include <string>

int main() {
  std::string user;  // 宣告 string 型態的字串變數
  std::cout << "請問大名？\n";

  getline(std::cin, user);  // 從標準輸入裝置讀取文字，存入 user
  std::cout << user << "你好！\n";
}