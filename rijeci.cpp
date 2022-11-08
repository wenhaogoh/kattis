#include <iostream>
using namespace std;

int k, a = 1, b = 0;

int main()
{
  // A 1 0
  // B 0 1
  // BA 1 1
  // BAB 1 2
  cin >> k;
  for (int i = 0; i < k; i++)
  {
    int at = b;
    b += a;
    a = at;
  }
  cout << a << " " << b << endl;
}