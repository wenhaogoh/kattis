#include <iostream>
using namespace std;

int x, y;

int main() {
  cin >> x;
  while (x > 9) {
    y = 1;
    while (x != 0) {
      if (x % 10 != 0) {
        y *= x % 10;
      }
      x /= 10;
    }
    x = y;
  }
  cout << x << "\n";
}