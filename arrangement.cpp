#include <iostream>
using namespace std;

int n, m, q, r;

int main() {
  cin >> n >> m;
  q = m / n;
  r = m - q * n;
  for (int i = 0; i < n; i++) {
    int c = i < r ? q + 1 : q;
    for (int j = 0; j < c; j++) {
      cout << "*";
    }
    cout << "\n";
  }
}