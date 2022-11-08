#include <iostream>
#include <cmath>
using namespace std;

int t;
double c;

int main()
{
  cin >> t;
  while (t > 0)
  {
    cin >> c;
    cout << ceil(c / 400.0) << endl;
    t--;
  }
}