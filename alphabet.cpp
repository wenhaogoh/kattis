#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int n;
string s;
double dt = M_PI * 60.0 / 28.0 / 15.0;

int main() {
  cin >> n;
  while (n > 0) {
    getline(cin >> ws, s);
    int pos = s[0] == ' ' ? 26 : s[0] == '\'' ? 27 : s[0] - 'A';
    double t = 1;
    for (int i = 1; i < s.size(); i++) {
      char c = s[i];
      int cpos = c == ' ' ? 26 : c == '\'' ? 27 : c - 'A';
      // cout << c << endl;
      // cout << cpos << endl;
      int dc = min(abs(cpos - pos), 28 - abs(cpos - pos));
      // cout << "dc: " << dc << endl;
      t += dt * dc;
      t += 1;
      pos = cpos;
    }
    cout << fixed << setprecision(10) << t << endl;
    n--;
  }
}