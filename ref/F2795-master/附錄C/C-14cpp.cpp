#include <iostream>
#include <string>
using std::cout;
using std::endl;

struct cookie {
  std::string name;
  int price;
};

// 多載 "<<" 運算子，讓它具備輸出 cookie 結構體的功能
void operator<<(std::ostream &o, cookie &c) {
  o << c.name << "，定價 " << c.price << "元" << endl;
}

int main() {
  cookie c = {"蝴蝶酥", 25};  // 宣告並設定 cookie 結構資料值
  cout << c;                  // 輸出 cookie 結構體
}