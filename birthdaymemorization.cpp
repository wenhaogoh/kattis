#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<string, int> si;

int main()
{
  int n;
  unordered_map<string, si> um;
  cin >> n;
  int i = 0;
  while (i < n)
  {
    string a, c;
    int b;
    cin >> a >> b >> c;
    auto iter = um.find(c);
    if (iter == um.end() || b > (*iter).second.second)
    {
      um[c] = {a, b};
    }
    i++;
  }
  vector<string> v;
  for (auto &kv : um)
  {
    v.push_back(kv.second.first);
  }
  sort(v.begin(), v.end());
  cout << v.size() << "\n";
  for (auto &s : v)
  {
    cout << s << "\n";
  }
}