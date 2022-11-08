#include <iostream>
#include <algorithm>
using namespace std;

int n, a, b, g, m;
string s;

int main() {
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    char c = s[i];
    if (c == 'A' + i % 3) {
      a++;
    }
    if ((i % 4 == 0 || i % 4 == 2) && c == 'B') {
      b++;
    }
    if (i % 4 == 1 && c == 'A') {
      b++;
    }
    if (i % 4 == 3 && c == 'C') {
      b++;
    }
    if ((i % 6 == 0 || i % 6 == 1) && c == 'C') {
      g++;
    }
    if ((i % 6 == 2 || i % 6 == 3) && c == 'A') {
      g++;
    }
    if ((i % 6 == 4 || i % 6 == 5) && c == 'B') {
      g++;
    }
  }
  m = max(max(a, b), g);
  // cout << a << " " << b << " " << c << endl;
  cout << m << endl;
  cout << (m == a ? "Adrian\n" : "");
  cout << (m == b ? "Bruno\n" : "");
  cout << (m == g ? "Goran\n" : "");
}