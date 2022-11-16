#include <iostream>
using namespace std;

int n, m;

int main()
{
  cin >> n >> m;
  int angle = abs(m - n);
  if (angle > 180)
  {
    angle = 360 - angle;
  }
  if ((angle + n) % 360 != m)
  {
    angle *= -1;
  }
  cout << angle << endl;
}