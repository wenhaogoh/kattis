#include <iostream>
using namespace std;

long n, i;

int main()
{
  cin >> n;
  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n *= 3;
      n += 1;
    }
    i++;
  }
  cout << i + 1 << endl;
}