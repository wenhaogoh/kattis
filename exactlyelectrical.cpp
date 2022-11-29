#include <iostream>
using namespace std;

int a, b, c, d, t;

int main()
{
  cin >> a >> b >> c >> d >> t;
  int shortest = abs(a - c) + abs(b - d);
  if (t < shortest)
  {
    cout << "N" << endl;
    return 0;
  }
  int remaining = t - shortest;
  if (remaining % 2 == 0)
  {
    cout << "Y" << endl;
  }
  else
  {
    cout << "N" << endl;
  }
}