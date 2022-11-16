#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;

int n, res;
string s;
unordered_set<string> d;
vector<string> v = {""};
unordered_map<char, vector<char>> m = {
    {'2', {'a', 'b', 'c'}},
    {'3', {'d', 'e', 'f'}},
    {'4', {'g', 'h', 'i'}},
    {'5', {'j', 'k', 'l'}},
    {'6', {'m', 'n', 'o'}},
    {'7', {'p', 'q', 'r', 's'}},
    {'8', {'t', 'u', 'v'}},
    {'9', {'w', 'x', 'y', 'z'}},
};

void backtrack(string, int, string);

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s;
    d.insert(s);
    n--;
  }
  cin >> s;
  for (auto &c : s)
  {
    vector<char> cv = m[c];
    vector<string> nv;
    for (auto &vi : v)
    {
      for (auto &cvi : cv)
      {
        nv.push_back(vi + cvi);
      }
    }
    v = nv;
  }
  for (auto &vi : v)
  {
    if (d.find(vi) != d.end())
    {
      res++;
    }
  }
  cout << res << endl;
}