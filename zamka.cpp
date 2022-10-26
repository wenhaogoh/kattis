#include <iostream>
using namespace std;

int main() {
  int l, d, x;
  cin >> l >> d >> x;
  for (int i = l; i <= d; i++) {
    int a = 0;
    string s = to_string(i);
    for (auto& c : s) {
      a += c - '0';
    }
    if (a == x) {
      cout << i << "\n";
      break;
    }
  }
  for (int i = d; i >= l; i--) {
    int b = 0;
    string s = to_string(i);
    for (int c : s) {
      b += c - '0';
    }
    if (b == x) {
      cout << i;
      break;
    }
  }
}