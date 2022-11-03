#include <iostream>
using namespace std;

int p, q, s;

int main()
{
  cin >> p >> q >> s;
  for (int i = 1; i <= s; i++)
  {
    if (i % p == 0 && i % q == 0)
    {
      cout << "yes" << endl;
      return 0;
    }
  }
  cout << "no" << endl;
}