#include <iostream>
using namespace std;

string s;

int main() {
  while(cin >> s) {
    for (size_t i = 0; i < s.length(); i++) {
      if (s[i] == 'a' ||
          s[i] == 'e' ||
          s[i] == 'i' ||
          s[i] == 'o' ||
          s[i] == 'u') {
        i += 2;
      }
      cout << s[i];
    }
    cout << " ";
  }
  cout << endl;
}