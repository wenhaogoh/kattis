#include <iostream>
using namespace std;

int n;
string s;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> s;
    for (int i = 1; i <= s.length(); i++)
    {
      int m = i * i;
      if (m >= s.length())
      {
        int d = m - s.length();
        for (int j = 0; j < d; j++)
        {
          s += '*';
        }
        char a[i][i];
        for (int j = 0; j < i; j++)
        {
          for (int k = 0; k < i; k++)
          {
            a[j][k] = s[j * i + k];
          }
        }
        for (int j = 0; j < i; j++)
        {
          for (int k = j; k < i; k++)
          {
            char temp = a[j][k];
            a[j][k] = a[k][j];
            a[k][j] = temp;
          }
        }
        for (int j = 0; j < i; j++)
        {
          for (int k = 0; k < i / 2; k++)
          {
            char temp = a[j][k];
            a[j][k] = a[j][i - k - 1];
            a[j][i - k - 1] = temp;
          }
        }

        for (int j = 0; j < i; j++)
        {
          for (int k = 0; k < i; k++)
          {
            if (a[j][k] != '*')
            {
              cout << a[j][k];
            }
          }
        }
        cout << endl;
        break;
      }
    }
    n--;
  }
}