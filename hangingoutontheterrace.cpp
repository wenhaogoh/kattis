#include <iostream>
using namespace std;

int l, x, v, t, c;
string s;

int main()
{
  cin >> l >> x;
  while (x > 0)
  {
    cin >> s >> v;
    if (s == "leave")
    {
      t -= v;
    }
    else
    {
      if (t + v > l)
      {
        c++;
      }
      else
      {
        t += v;
      }
    }
    x--;
  }
  cout << c << endl;
}