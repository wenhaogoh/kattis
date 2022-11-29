#include <iostream>
#include <vector>
using namespace std;

int n;
string s;
vector<char> a[14];

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> s;
    int duration = 1;
    int idx = isupper(s[0]) ? 7 + s[0] - 'A' : s[0] - 'a';
    if (s.length() > 1)
    {
      duration = stoi(s.substr(1));
    }
    for (int i = 0; i < duration; i++)
    {
      for (int j = 0; j < 14; j++)
      {
        char c;
        if (j == 0 || j == 4 || j == 6 || j == 8 || j == 10 || j == 12)
        {
          c = '-';
        }
        else
        {
          c = ' ';
        }
        if (j == idx)
        {
          c = '*';
        }
        a[j].push_back(c);
      }
    }
    for (int j = 0; j < 14; j++)
    {
      char c;
      if (j == 0 || j == 4 || j == 6 || j == 8 || j == 10 || j == 12)
      {
        c = '-';
      }
      else
      {
        c = ' ';
      }
      a[j].push_back(c);
    }
  }
  for (int i = 13; i >= 0; i--)
  {
    a[i].pop_back();
  }
  for (int i = 13; i >= 0; i--)
  {
    if (i < 7)
    {
      cout << char('a' + i) << ": ";
    }
    else
    {
      cout << char('A' + i - 7) << ": ";
    }
    for (auto &c : a[i])
    {
      cout << c;
    }
    cout << endl;
  }
}