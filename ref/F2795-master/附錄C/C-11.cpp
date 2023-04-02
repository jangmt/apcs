#include <iostream>
#include <string>
#define CHAR_SIZE 30

int main() {
  char user[CHAR_SIZE];  // 宣告字元陣列

  std::cout << "請問大名？\n";
  std::cin.getline(user, CHAR_SIZE);  // 讀入字元陣列，字元數上限
  std::cout << user << "你好！\n";
}