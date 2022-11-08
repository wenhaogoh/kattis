#include <iostream>
using namespace std;

int n, s;
string p, c;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    p = c;
    cin >> c;
    if (i > 0 && p == c) {
      s++;
    }
  }
  cout << s << endl;
}