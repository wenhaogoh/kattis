#include <iostream>
#include <cstring>
using namespace std;

int t, a, b;
string s, res;

int getNum(string s);

int main() {
  cin >> t;
  while (t > 0) {
    getline(cin >> ws, s);
    a = getNum(s);
    getline(cin >> ws, s);
    b = getNum(s);
    res = to_string(a + b);
    for (auto& c : res) {
      cout << c << " ";
    }
    cout << endl;
    t--;
  }
}

int getNum(string s) {
  char* token = strtok(const_cast<char*>(s.c_str()), " ");
  string digits = "";
  while (token != NULL) {
    digits += token;
    token = strtok(NULL, " ");
  }
  return stoi(digits);
}