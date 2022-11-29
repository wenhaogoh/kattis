#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string s;
unordered_map<string, int> um;

vector<string> split(string s, string delim)
{
  vector<string> res;
  size_t pos = 0, next;
  while ((next = s.find(delim, pos)) != string::npos)
  {
    res.push_back(s.substr(pos, next - pos));
    pos = next + delim.length();
  }
  res.push_back(s.substr(pos));
  return res;
}

int main()
{
  while (getline(cin, s))
  {
    vector<string> toks = split(s, " ");
    if (toks[0] == "define")
    {
      um[toks[2]] = stoi(toks[1]);
    }
    else
    {
      if (um.find(toks[1]) == um.end() || um.find(toks[3]) == um.end())
      {
        cout << "undefined" << endl;
        continue;
      }
      int a = um[toks[1]], b = um[toks[3]];
      if (toks[2] == "=")
      {
        cout << (a == b ? "true" : "false") << endl;
      }
      else if (toks[2] == "<")
      {
        cout << (a < b ? "true" : "false") << endl;
      }
      else
      {
        cout << (a > b ? "true" : "false") << endl;
      }
    }
  }
}