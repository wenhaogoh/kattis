#include <iostream>
using namespace std;

int n, d = 0, m, o;

int main() {
  cin >> n;
  cin >> m;
  for (int i = 1; i < n; i++) {
    cin >> o;
    if (o < m) {
      m = o;
      d = i;
    }
  }
  cout << d << endl;
}