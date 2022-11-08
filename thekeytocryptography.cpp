#include <iostream>
using namespace std;

string c, s;

int main()
{
  cin >> c >> s;
  string p = "";
  for (int i = 0; i < c.length(); i++)
  {
    char ki, ci = c[i];
    if (i >= s.length())
    {
      ki = p[i - s.length()];
    }
    else
    {
      ki = s[i];
    }
    p.push_back('A' + (ci >= ki ? ci - ki : 26 - (ki - ci)));
  }
  cout << p << endl;
}