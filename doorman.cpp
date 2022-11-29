#include <iostream>
using namespace std;

int x, diff;
string s;

int main()
{
  cin >> x >> s;
  bool hasCut = false;
  for (int i = 0; i < s.length(); i++)
  {
    char c = s[i];
    if (c == 'M')
    {
      diff--;
    }
    else
    {
      diff++;
    }
    if (abs(diff) > x && hasCut)
    {
      cout << i - 1 << endl;
      return 0;
    }
    else if (abs(diff) > x)
    {
      hasCut = true;
    }
    else
    {
      hasCut = false;
    }
  }
  if (hasCut)
  {
    cout << s.length() - 1 << endl;
  }
  else
  {
    cout << s.length() << endl;
  }
}