#include <iostream>
using namespace std;

int a = 1;

int main()
{
  string s;
  cin >> s;
  for (auto &c : s)
  {
    if (c == 'A')
    {
      if (a == 3)
        continue;
      a = a == 1 ? 2 : 1;
    }
    else if (c == 'B')
    {
      if (a == 1)
        continue;
      a = a == 2 ? 3 : 2;
    }
    else if (c == 'C')
    {
      if (a == 2)
        continue;
      a = a == 3 ? 1 : 3;
    }
  }
  cout << a;
}