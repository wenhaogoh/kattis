#include <iostream>
using namespace std;

int n;
string s;

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "P=NP") {
      cout << "skipped" << endl;
    } else {
      auto iter = s.find("+");
      cout << stoi(s.substr(0, iter)) + stoi(s.substr(iter + 1)) << endl;
    }
  }
}