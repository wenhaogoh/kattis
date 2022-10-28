#include <iostream>
#include <cmath>
#include <unordered_map>
#include <iomanip>
using namespace std;

double P, D, d, a, b, wa, wb, wat, wbt, v, vt, e;
unordered_map<int, pair<int, int>> um;

int main() {
  cin >> P >> D;
  for (int i = 0; i < P; i++) {
    cin >> d >> a >> b;
    auto iter = um.find(d);
    um[d] = iter == um.end() ? make_pair(a, b) : make_pair(a + um[d].first, b + um[d].second);
  }
  for (int i = 1; i <= D; i++) {
    v = um[i].first + um[i].second;
    cout << ceil((v + 1) / 2) << endl;
    if (um[i].first > um[i].second) {
      wa = um[i].first - ceil((v + 1) / 2);
      wb = um[i].second;
      cout << "A" << " " << wa << " " << wb << "\n";
    } else {
      wa = um[i].first;
      wb = um[i].second - v / 2 - 1;
      cout << "B" << " " << wa << " " << wb << "\n";
    }
    wat += wa;
    wbt += wb;
    vt += v;
  }
  cout << fixed << setprecision(10) << abs(wat - wbt) / vt << endl;
}