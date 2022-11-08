#include <iostream>
#include <set>
using namespace std;

int g = 10;
string a, b;
set<char> s;

int main() {
  cin >> a >> b;
  for (auto& c : a) {
    s.insert(c);
  }
  for (auto& c : b) {
    if (s.find(c) != s.end()) {
      s.erase(c);
    } else {
      g--;
    }
    if (s.empty()) {
      cout << "WIN" << endl;
      return 0;
    }
    if (g == 0) {
      cout << "LOSE" << endl;
      return 0;
    }
  }
}