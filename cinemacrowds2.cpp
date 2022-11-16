#include <iostream>
using namespace std;

int n, m, x, curr;

int main()
{
  cin >> n >> m;
  while (m > 0)
  {
    cin >> x;
    curr += x;
    if (curr > n)
    {
      break;
    }
    m--;
  }
  cout << m << endl;
}