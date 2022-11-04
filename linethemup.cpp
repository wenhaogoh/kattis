#include <iostream>
using namespace std;

int n;
string p, s;
bool isDecreasing;

int main()
{
  cin >> n;
  cin >> p >> s;
  isDecreasing = s < p;
  n -= 2;
  while (n > 0)
  {
    p = s;
    cin >> s;
    if (isDecreasing != s < p)
    {
      cout << "NEITHER" << endl;
      return 0;
    }
    n--;
  }
  cout << (isDecreasing ? "DECREASING" : "INCREASING") << endl;
}