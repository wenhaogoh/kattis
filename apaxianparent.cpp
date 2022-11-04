#include <iostream>
using namespace std;

string y, p;

int main()
{
  cin >> y >> p;
  if (y.substr(y.length() - 2) == "ex")
  {
    cout << y + p << endl;
  }
  else if (y.back() == 'e')
  {
    cout << y + "x" + p << endl;
  }
  else if (y.back() == 'a' || y.back() == 'i' || y.back() == 'o' || y.back() == 'u')
  {
    cout << y.substr(0, y.length() - 1) + "ex" + p << endl;
  }
  else
  {
    cout << y + "ex" + p << endl;
  }
}