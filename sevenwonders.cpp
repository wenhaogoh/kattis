#include <iostream>
using namespace std;

string s;
int t, c, g;

int main() {
  cin >> s;
  for (auto& a : s) {
    if (a == 'T') {
      t++;
    } else if (a == 'C') {
      c++;
    } else {
      g++;
    }
  }
  cout << t*t + c*c + g*g + min(t, min(c, g)) * 7 << endl;
}