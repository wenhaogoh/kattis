#include <iostream>
using namespace std;

int w, b;
string s;

int main()
{
  cin >> s;
  for (auto &c : s)
  {
    if (c == 'W')
    {
      w++;
    }
    else
    {
      b++;
    }
  }
  cout << (w == b ? 1 : 0) << endl;
}