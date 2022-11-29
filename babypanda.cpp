#include <iostream>
using namespace std;

long long n, m, res;

int main()
{
  cin >> n >> m;
  while (m)
  {
    while (!(m % 2))
    {
      m /= 2;
    }
    m--;
    res++;
  }
  cout << res << endl;
}