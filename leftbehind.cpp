#include <iostream>
using namespace std;

int x, y;

int main()
{
  while (cin >> x >> y && x != 0 || y != 0)
  {
    if (x + y == 13)
    {
      cout << "Never speak again." << endl;
    }
    else if (x == y)
    {
      cout << "Undecided." << endl;
    }
    else if (x > y)
    {
      cout << "To the convention." << endl;
    }
    else
    {
      cout << "Left beehind." << endl;
    }
  }
}