#include <iostream>
using namespace std;

double a1, b1, a2, b2;

int main()
{
  cin >> a1 >> b1 >> a2 >> b2;
  double g = (a1 + b1) / 2 + (a2 + b2) / 2;
  cin >> a1 >> b1 >> a2 >> b2;
  double e = (a1 + b1) / 2 + (a2 + b2) / 2;
  if (g == e)
  {
    cout << "Tie" << endl;
  }
  else if (g > e)
  {
    cout << "Gunnar" << endl;
  }
  else
  {
    cout << "Emma" << endl;
  }
}