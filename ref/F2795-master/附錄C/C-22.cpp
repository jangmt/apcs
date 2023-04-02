#include <algorithm>  // 內含 sort() 函式定義
#include <iostream>
#include <vector>

int main() {
  std::vector<int> data{4, 2, 3, 5, 1};  // 定義 vector 物件

  std::sort(data.begin(), data.end());  // 由小到大，昇冪排序。
  /*
  std::sort(data.begin(), data.end(), std::greater<int>() );  // 由大到小，降冪排序。
  */

  for (int n : data)
    std::cout << n << std::endl;
}