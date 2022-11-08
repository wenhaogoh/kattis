#include <iostream>
using namespace std;

int n;
string s;

int main() {
  cin >> n;
  while (n > 0) {
    getline(cin >> ws, s);
    size_t idx = s.find("Simon says");
    if (idx != string::npos) {
      cout << s.substr(idx + 11) << endl;
    }
    n--;
  }
}