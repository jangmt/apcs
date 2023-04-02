#include <iostream>
#include <vector>  // 內含 vector 物件的相關函式定義
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> data{3, 4, 5, 6, 7};  // 定義並初始化vector

  for (auto it = data.begin(); it != data.end(); it++) {
    cout << *it << endl;  // 從頭到尾逐一取出 data 元素值
  }

  /* 等同
  std::vector<int>::iterator it;
  for (it=data.begin(); it!=data.end(); it++) {
    cout << *it << endl;
  }
  */
}