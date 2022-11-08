#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, t, m;
vector<int> v;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (int i = 1; i <= n; i++) {
    int c = v[v.size() - i] + i;
    m = max(m, c);
  }
  cout << m + 1 << endl;
}