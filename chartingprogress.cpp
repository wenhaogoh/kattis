#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string s;
vector<string> v;
vector<pair<int, int>> seq;
int row;

int main()
{
  while (getline(cin, s))
  {
    if (s.empty())
    {
      sort(seq.rbegin(), seq.rend());
      for (int i = 0; i < row; i++)
      {
        for (int j = 0; j < seq.size(); j++)
        {
          cout << v[i][seq[j].second];
        }
        cout << endl;
      }
      cout << endl;
      row = 0;
      v.clear();
      seq.clear();
      continue;
    }
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '*')
      {
        seq.push_back({row, i});
      }
    }
    v.push_back(s);
    row++;
  }
  sort(seq.rbegin(), seq.rend());
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < seq.size(); j++)
    {
      cout << v[i][seq[j].second];
    }
    cout << endl;
  }
  cout << endl;
}