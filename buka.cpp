#include <iostream>
using namespace std;

string a, b, o;

int main()
{
  cin >> a >> o >> b;
  if (o == "*")
  {
    cout << "1";
    for (int i = 0; i < a.length() + b.length() - 2; i++)
    {
      cout << "0";
    }
    cout << endl;
  }
  else
  {
    if (a.length() == b.length())
    {
      cout << "2";
      for (int i = 0; i < a.length() - 1; i++)
      {
        cout << "0";
      }
      cout << endl;
    }
    else
    {
      for (int i = 0; i < max(a.length(), b.length()); i++)
      {
        if (i == 0 || i == abs(int(a.length() - b.length())))
        {
          cout << "1";
        }
        else
        {
          cout << "0";
        }
      }
      cout << endl;
    }
  }
}