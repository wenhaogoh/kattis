#include <iostream>
using namespace std;

unsigned int n, r = 0;

int main() {
  cin >> n;
  while (n > 0) {
    r <<= 1;
    if (n & 1) {
      r ^= 1;
    }
    n >>= 1;
  }
  cout << r << endl;
}