#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

string s;
size_t pos;
unordered_map<string, set<int>> um = {
  { "P", {} },
  { "K", {} },
  { "H", {} },
  { "T", {} },
};

int main() {
  cin >> s;
  while (pos < s.length()) {
    string suit = s.substr(pos, 1);
    int val = stoi(s.substr(pos + 1, 2));
    auto iter = um[suit].find(val);
    if (iter != um[suit].end()) {
      cout << "GRESKA" << endl;
      return 0;
    }
    um[suit].insert(val);
    pos += 3;
  }
  cout << 13 - um["P"].size() << " "
       << 13 - um["K"].size() << " "
       << 13 - um["H"].size() << " "
       << 13 - um["T"].size() << endl;
}