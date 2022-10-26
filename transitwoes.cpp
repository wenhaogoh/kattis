#include <iostream>
using namespace std;

int t, e, n;

int main() {
  cin >> t >> e >> n; // "end" is ambiguous
  int d[n + 1], b[n], c[n];
  for (int i = 0; i <= n; i++) {
    cin >> d[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  for (int i = 0; i < n; i++) {
    t += d[i];
    t += t % c[i] == 0 ? 0 : c[i] - t % c[i];
    t += b[i];
  }

  t += d[n];

  cout << (t > e ? "no" : "yes");
}