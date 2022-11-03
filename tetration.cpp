#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double n;

int main()
{
  cin >> n;
  cout << fixed << setprecision(6) << pow(n, 1 / n) << endl;
}