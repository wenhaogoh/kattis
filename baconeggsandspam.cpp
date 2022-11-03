#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int n;
string s;

vector<string> split(string, string);

int main()
{
  while (cin >> n && n != 0)
  {
    unordered_map<string, vector<string>> um;
    set<string> foods;
    while (n > 0)
    {
      getline(cin >> ws, s);
      vector<string> ss = split(s, " ");
      for (int i = 1; i < ss.size(); i++)
      {
        auto iter = um.find(ss[i]);
        if (iter == um.end())
        {
          um[ss[i]] = vector<string>();
        }
        um[ss[i]].push_back(ss[0]);
        foods.insert(ss[i]);
      }
      n--;
    }
    for (auto &f : foods)
    {
      cout << f << " ";
      vector<string> names = um[f];
      sort(names.begin(), names.end());
      for (auto &n : names)
      {
        cout << n << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
}

vector<string> split(string s, string delim)
{
  size_t pos = 0, next;
  vector<string> v;
  while ((next = s.find(delim, pos)) != string::npos)
  {
    v.push_back(s.substr(pos, next - pos));
    pos = next + 1;
  }
  v.push_back(s.substr(pos));
  return v;
}