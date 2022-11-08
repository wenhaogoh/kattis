#include <iostream>
using namespace std;

int a, b, c, d, e, s;

int main() {
  cin >> a >> b >> c >> d >> e >> s;
  cout << (s >= a ? "A" : s >= b ? "B" : s >= c ? "C" : s >= d ? "D" : s >= e ? "E" : "F") << endl;
}