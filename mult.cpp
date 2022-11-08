#include <iostream>
using namespace std;

int n, m, c;

int main() {
  cin >> n >> m;
  for (int i = 1; i < n; i++) {
    cin >> c;
    if (c % m == 0) {
      cout << c << endl;
      cin >> m;
      i++;
    }
  }
}