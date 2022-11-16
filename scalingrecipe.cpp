#include <iostream>
using namespace std;

double n, x, y, a;

int main()
{
  cin >> n >> x >> y;
  while (n > 0)
  {
    cin >> a;
    cout << int(a / x * y) << endl;
    n--;
  }
}