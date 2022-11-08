#include <iostream>
using namespace std;

string s;

int main()
{
  cin >> s;
  string a = s.substr(0, s.length() / 3);
  string b = s.substr(s.length() / 3, s.length() / 3);
  string c = s.substr(2 * s.length() / 3, s.length() / 3);
  if (a == b)
  {
    cout << a << endl;
  }
  else if (b == c)
  {
    cout << b << endl;
  }
  else
  {
    cout << c << endl;
  }
}