#include <iostream>
using namespace std;

string c, k;

int main()
{
  cin >> c >> k;
  for (int i = 0; i < c.length(); i++)
  {
    if (i % 2 != 0)
    {
      cout << (char)((c[i] - 'A' + k[i] - 'A') % 26 + 'A');
    }
    else
    {
      char t = c[i] - 'A' - (k[i] - 'A');
      cout << (char)(t + (t < 0 ? 'Z' + 1 : 'A'));
    }
  }
  cout << "\n";
}