#include <iostream>
using namespace std;

int n;

int main() {
  cin >> n;
  if (n % 2 == 0) {
    cout << "Alice" << "\n";
    cout << 1 << "\n";
  } else {
    cout << "Bob" << "\n";
  }
}

// 1 L
// 2 W
// 3 L (1, 2) (2, 1)
// 4 W (1, 3) (2, 2)
// 5 L (1, 4) (2, 3)
// 6 W (1, 5)
// 7 L (1, 6) (2, 5,) (3, 4)
// 8 W (1, 7)