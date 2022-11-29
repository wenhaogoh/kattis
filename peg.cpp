#include <iostream>
using namespace std;

int res = 0;
char m[7][7];
string s;

int main()
{
  for (int i = 0; i < 7; i++)
  {
    getline(cin, s);
    for (int j = 0; j < 7; j++)
    {
      m[i][j] = s[j];
    }
  }
  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
    {
      if (m[i][j] == 'o')
      {
        if (i < 5 && m[i + 1][j] == 'o' && m[i + 2][j] == '.')
        {
          res++;
        }
        if (i > 1 && m[i - 1][j] == 'o' && m[i - 2][j] == '.')
        {
          res++;
        }
        if (j < 5 && m[i][j + 1] == 'o' && m[i][j + 2] == '.')
        {
          res++;
        }
        if (j > 1 && m[i][j - 1] == 'o' && m[i][j - 2] == '.')
        {
          res++;
        }
      }
    }
  }
  cout << res << endl;
}