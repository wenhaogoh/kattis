#include <iostream>
using namespace std;

long long n, a, b, c;

int main()
{
  cin >> n;
  a = 1;
  b = 2;
  c = 4;
  for (int i = 4; i <= n; i++)
  {
    int temp = a + b + c;
    a = b;
    b = c;
    c = temp;
  }
  cout << c << endl;
}