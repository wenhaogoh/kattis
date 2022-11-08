#include <iostream>
using namespace std;

int s;
int a = 2, b = 1;

int main()
{
  cin >> s;
  cout << s << ":" << endl;
  while (a + b <= s)
  {
    if (s % (a + b) == 0 || s % (a + b) == a)
    {
      cout << a << "," << b << endl;
    }
    if (b < a)
    {
      b++;
    }
    else
    {
      a++;
    }
  }
}