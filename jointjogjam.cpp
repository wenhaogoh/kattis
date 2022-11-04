#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double skx, sky, sox, soy, ekx, eky, eox, eoy;

int main()
{
  cin >> skx >> sky >> sox >> soy >> ekx >> eky >> eox >> eoy;
  cout << fixed << setprecision(10) << sqrt(max((skx - sox) * (skx - sox) + (sky - soy) * (sky - soy), (ekx - eox) * (ekx - eox) + (eky - eoy) * (eky - eoy))) << endl;
}