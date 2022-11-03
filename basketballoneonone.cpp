#include <iostream>
using namespace std;

string s;
int a, b;

int main()
{
  cin >> s;
  bool isTied = false;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'A')
    {
      a += s[i + 1] - '0';
    }
    else
    {
      b += s[i + 1] - '0';
    }
    i++;
    if (a == 10 && b == 10)
    {
      isTied = true;
      continue;
    }
    if (!isTied)
    {
      if (a >= 11)
      {
        cout << "A" << endl;
        return 0;
      }
      if (b >= 11)
      {
        cout << "B" << endl;
        return 0;
      }
    }
    else
    {
      if (a - b >= 2)
      {
        cout << "A" << endl;
        return 0;
      }
      else if (b - a >= 2)
      {
        cout << "B" << endl;
        return 0;
      }
    }
  }
}