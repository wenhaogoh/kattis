#include <iostream>
#include <algorithm>
using namespace std;

int tc, r, c;

int main() {
  cin >> tc;
  for (int i = 0; i < tc; i++) {
    cin >> r >> c;
    string s[r];
    for (int j = 0; j < r; j++) {
      cin >> s[j];
    }
    cout << "Test " << i + 1 << endl;
    for (int j = r - 1; j >= 0; j--) {
      reverse(s[j].begin(), s[j].end());
      cout << s[j] << endl;
    }
  }
}