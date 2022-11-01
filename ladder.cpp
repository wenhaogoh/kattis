#include <iostream>
#include <cmath>
using namespace std;

int h, v;

int main()
{
  cin >> h >> v;
  // sin(theta) = o/h
  cout << ceil(h / sin(M_PI * v / 180));
}