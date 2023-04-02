#include <iostream>
using namespace std;

int area(int n) {
  return n * n;
}
int area(int w, int h) {
  return w * h;
}

int main() {
  cout << "正方形面積：" << area(5) << endl;
  cout << "長方形面積：" << area(5, 8) << endl;
}