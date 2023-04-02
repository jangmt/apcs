#include <iostream>
using std::cout;
using std::endl;

template <typename T>
T max(T a, T b) {
  return a > b ? a : b;
}

int main() {
  cout << "max(3, 5) = " << max(3, 5) << endl;
  cout << "max(4.2, 3.8) = " << max(4.2, 3.8) << endl;

  /* 等同：
  std::cout << "max(3, 5) = " << std::max(3, 5) << std::endl;
  std::cout << "max(3, 5) = " << std::max(4.2, 3.8) << std::endl;
  */
}