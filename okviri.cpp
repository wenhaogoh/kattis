#include <iostream>
using namespace std;

int r = 5, c;
string s;

int main()
{
  cin >> s;
  c = s.length() * 4 + 1;
  char **m = new char *[r];
  for (int i = 0; i < r; i++)
  {
    m[i] = new char[c];
  }
  for (int i = 0; i < s.length(); i++)
  {
    for (int j = 0; j < 5; j++)
    {
      for (int k = 0; k < 5; k++)
      {
        char a = '.';
        if (j == 2 && k == 2)
        {
          a = s[i];
        }
        else if ((j == 0 && k == 2) ||
                 (j == 1 && (k == 1 || k == 3)) ||
                 (j == 2 && (k == 0 || k == 4)) ||
                 (j == 3 && (k == 1 || k == 3)) ||
                 (j == 4 && k == 2))
        {
          a = i % 3 == 2 ? '*' : '#';
        }
        if (m[j][i * 4 + k] != '*')
        {
          m[j][i * 4 + k] = a;
        }
      }
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << m[i][j];
    }
    cout << endl;
  }
}