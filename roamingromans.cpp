#include <iostream>
#include <iomanip>
using namespace std;

float x;

int main()
{
  cin >> x;
  cout << fixed << setprecision(0) << x * 1000 * 5280 / 4854 << endl;
}