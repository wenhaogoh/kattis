#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<char, string> um = {
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'_', "..--"},
    {'.', "---."},
    {',', ".-.-"},
    {'?', "----"},
};

unordered_map<string, char> umm;

string s;

int main()
{
  for (auto &kv : um)
  {
    umm[kv.second] = kv.first;
  }
  while (cin >> s)
  {
    vector<int> v;
    string e, res;
    for (auto &c : s)
    {
      v.push_back(um[c].length());
      e += um[c];
    }
    reverse(v.begin(), v.end());
    size_t pos = 0;
    for (auto &l : v)
    {
      res += umm[e.substr(pos, l)];
      pos += l;
    }
    cout << res << endl;
  }
}
