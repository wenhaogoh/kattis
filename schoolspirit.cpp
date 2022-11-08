#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int n, s;
vector<int> v;

int main() {
  cin >> n;
  while (n > 0) {
    cin >> s;
    v.push_back(s);
    n--;
  }
  double t = 0, f = 1;
  for (int i = 0; i < v.size(); i++) {
    t += v[i] * f;
    f *= 4.0 / 5.0;
  }
  cout << fixed << setprecision(10) << t / 5 << endl;
  double tt = 0;
  for (int i = 0; i < v.size(); i++) {
    t = 0, f = 1;
    for (int j = 0; j < v.size(); j++) {
      if (i == j) continue;
      t += v[j] * f;
      f *= 4.0 / 5.0;
    }
    tt += t / 5;
  }
  cout << fixed << setprecision(10) << tt / v.size() << endl;
}