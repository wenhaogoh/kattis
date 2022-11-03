#include <iostream>
#include <set>
#include <vector>
using namespace std;

set<string> res;
vector<string> words;
string s;

int main()
{
  while (cin >> s)
  {
    words.push_back(s);
  }
  for (int i = 0; i < words.size() - 1; i++)
  {
    for (int j = i + 1; j < words.size(); j++)
    {
      res.insert(words[i] + words[j]);
      res.insert(words[j] + words[i]);
    }
  }
  for (auto &w : res)
  {
    cout << w << endl;
  }
}