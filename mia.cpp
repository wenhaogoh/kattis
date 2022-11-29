#include <iostream>
using namespace std;

int a, b, c, d;

int main()
{
  while (cin >> a >> b >> c >> d && (a + b + c + d != 0))
  {
    int p1 = 0, p2 = 0;
    if (a + b == 3)
    {
      p1 = 2;
    }
    else if (a == b)
    {
      p1 = 1;
    }
    if (c + d == 3)
    {
      p2 = 2;
    }
    else if (c == d)
    {
      p2 = 1;
    }
    if (p1 > p2)
    {
      cout << "Player 1 wins." << endl;
    }
    else if (p2 > p1)
    {
      cout << "Player 2 wins." << endl;
    }
    else
    {
      if (p1 == 2)
      {
        cout << "Tie." << endl;
      }
      else if (p1 == 1)
      {
        if (a > c)
        {
          cout << "Player 1 wins." << endl;
        }
        else if (c > a)
        {
          cout << "Player 2 wins." << endl;
        }
        else
        {
          cout << "Tie." << endl;
        }
      }
      else
      {
        if (min(a, b) + max(a, b) * 10 > min(c, d) + max(c, d) * 10)
        {
          cout << "Player 1 wins." << endl;
        }
        else if (min(a, b) + max(a, b) * 10 < min(c, d) + max(c, d) * 10)
        {
          cout << "Player 2 wins." << endl;
        }
        else
        {
          cout << "Tie." << endl;
        }
      }
    }
  }
}