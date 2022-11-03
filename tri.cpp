#include <iostream>
using namespace std;

int a, c, e;
string b, d;

int main()
{
  cin >> a >> c >> e;
  if (a + c == e)
  {
    b = "+";
    d = "=";
  }
  else if (a - c == e)
  {
    b = "-";
    d = "=";
  }
  else if (a * c == e)
  {
    b = "*";
    d = "=";
  }
  else if (a / c == e && a % c == 0)
  {
    b = "/";
    d = "=";
  }
  else if (c + e == a)
  {
    b = "=";
    d = "+";
  }
  else if (c - e == a)
  {
    b = "=";
    d = "-";
  }
  else if (c * e == a)
  {
    b = "=";
    d = "*";
  }
  else if (c / e == a && c % e == 0)
  {
    b = "=";
    d = "/";
  }
  cout << a << b << c << d << e << endl;
}