#include <iostream>
#include <unordered_map>
using namespace std;

int r, t, a;
string b, c;

int main() {
  unordered_map<string, int> um;
  while (cin >> a && a != -1) {
    cin >> b >> c;
    if (c == "right") {
      r++;
      t += a + um[b] * 20;
    } else {
      um[b] = um.find(b) == um.end() ? 1 : um[b] + 1;
    }
  }
  cout << r << " " << t;
}