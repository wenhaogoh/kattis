#include <iostream>
#include <algorithm>
using namespace std;

int n;
string s;
char a[28];

int main()
{
  for (int i = 0; i < 26; i++)
  {
    a[i] = char('A' + i);
  }
  a[26] = '_';
  a[27] = '.';
  while (cin >> n && n != 0)
  {
    cin >> s;
    reverse(s.begin(), s.end());
    for (auto &c : s)
    {
      int idx;
      if (c == '_')
      {
        idx = 26;
      }
      else if (c == '.')
      {
        idx = 27;
      }
      else
      {
        idx = c - 'A';
      }
      cout << a[(idx + n) % 28];
    }
    cout << endl;
  }
}