#include <iostream>
using namespace std;

int x, y, r;

int main()
{
  cin >> x >> y >> r;
  cout << x + r << " " << y + r << endl;
  cout << x - r << " " << y + r << endl;
  cout << x - r << " " << y - r << endl;
  cout << x + r << " " << y - r << endl;
}