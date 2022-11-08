#include <iostream>
using namespace std;

int tc;
string s;

int main() {
  cin >> tc;
  for (int i = 0; i < tc; i++) {
    cin >> s;
    int sum = 0;
    for (int j = 1; j <= s.length(); j++) {
      int di = s[s.length() - j] - '0';
      if (j % 2 == 0) {
        di *= 2;
        if (di > 9) {
          di = di % 10 + di / 10;
        }
      }
      sum += di;
    }
    cout << (sum % 10 == 0 ? "PASS" : "FAIL") << endl;
  }
}