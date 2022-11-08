#include <iostream>
using namespace std;

int n, a, b;

int main() {
  cin >> n;
  while (true) {
    a = n;
    b = 0;
    while (a > 0) {
      b += a % 10;
      a /= 10;
    }
    if (n % b == 0) {
      cout << n << endl;
      return 0;
    }
    n++;
  }
}