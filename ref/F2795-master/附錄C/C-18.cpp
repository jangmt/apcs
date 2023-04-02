#include <iostream>
#include <vector>  // 內含 vector 物件的相關函式定義
using std::cout;
using std::endl;

int main() {
  std::vector<int> data{3, 4, 5};

  cout << "最初的容量：" << data.capacity() << endl;
  data.push_back(6);
  data.push_back(7);
  cout << "擴充後的容量：" << data.capacity() << endl;
  cout << "元素數量：" << data.size() << endl;
  cout << "容量上限：" << data.max_size() << endl;
  data.insert(data.end() - 2, 8);

  cout << "列舉 data 的所有元素：" << endl;
  for (int i = 0; i < data.size(); i++) {
    cout << data[i] << endl;
  }
}