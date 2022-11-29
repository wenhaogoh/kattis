#include <iostream>
using namespace std;

int a, b, c;

int main()
{
  while (cin >> a >> b >> c && (a + b + c != 0))
  {
    if (a > b)
    {
      swap(a, b);
    }
    if (b > c)
    {
      swap(b, c);
    }
    cout << (a * a + b * b == c * c ? "right" : "wrong") << endl;
  }
}