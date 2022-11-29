#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int n;
string s;

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
    unordered_map<string, vector<string>> forward;
    unordered_map<string, vector<string>> backward;
    vector<string> domain = split(s, " ");
    domain.erase(domain.begin());
    getline(cin, s);
    vector<string> codomain = split(s, " ");
    codomain.erase(codomain.begin());
    cin >> n;
    for (auto &dom : domain)
    {
      forward[dom] = vector<string>();
      // backward[dom] = vector<string>();
    }
    for (auto &codom : codomain)
    {
      // forward[codom] = vector<string>();
      backward[codom] = vector<string>();
    }
    while (n--)
    {
      getline(cin >> ws, s);
      vector<string> mapping = split(s, " -> ");
      forward[mapping[0]].push_back(mapping[1]);
      backward[mapping[1]].push_back(mapping[0]);
    }
    bool isFunction = true;
    for (auto &dom : domain)
    {
      if (forward[dom].size() > 1)
      {
        isFunction = false;
        break;
      }
    }
    if (!isFunction)
    {
      cout << "not a function" << endl;
      continue;
    }
    bool isInjective = true;
    for (auto &codom : codomain)
    {
      if (backward[codom].size() > 1)
      {
        isInjective = false;
        break;
      }
    }
    bool isSurjective = true;
    for (auto &codom : codomain)
    {
      if (backward[codom].size() == 0)
      {
        isSurjective = false;
        break;
      }
    }
    if (isInjective && isSurjective)
    {
      cout << "bijective" << endl;
    }
    else if (isInjective)
    {
      cout << "injective" << endl;
    }
    else if (isSurjective)
    {
      cout << "surjective" << endl;
    }
    else
    {
      cout << "neither injective nor surjective" << endl;
    }
  }
}