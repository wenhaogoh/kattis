#include <iostream>
#include <cmath>
using namespace std;

int n;
string s;

int main()
{
  cin >> n >> s;
  int res = pow(2, n + 1) - 1;
  int base;
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if (i == 0)
    {
      if (c == 'L')
      {
        base = 1;
      }
      else
      {
        base = 2;
      }
    }
    else
    {
      char prev = s[i - 1];
      if (prev == 'L')
      {
        base *= 2;
        if (c == 'R')
        {
          base++;
        }
      }
      else
      {
        base *= 2;
        if (c == 'L')
        {
          base--;
        }
      }
    }
    res -= base;
  }
  cout << res << endl;
}