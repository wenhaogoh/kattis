#include <iostream>
using namespace std;

double n, k, p;

int main()
{
  cin >> n >> k >> p;
  double e = (n - k) * p - k * (1.0 - p);
  if (e < 0)
  {
    cout << "spela" << endl;
  }
  else
  {
    cout << "spela inte!" << endl;
  }
}