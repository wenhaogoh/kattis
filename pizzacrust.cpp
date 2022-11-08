#include <iostream>
#include <iomanip>
using namespace std;

double r, c;

int main()
{
  cin >> r >> c;
  double cr = r - c;
  cout << fixed << setprecision(7) << (cr * cr) / (r * r) * 100 << endl;
}