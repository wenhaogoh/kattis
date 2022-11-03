#include <iostream>
using namespace std;

bool a[4][4];
int n;

int main()
{
  cin >> n;
  for (int i = 0; i < 4; i++)
  {
    int d = n % 10;
    n /= 10;
    for (int j = 0; j < 4; j++)
    {
      a[3 - j][3 - i] = d & 1 == 1;
      d >>= 1;
    }
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (j != 0)
      {
        cout << " ";
      }
      if (j == 2)
      {
        cout << "  ";
      }
      cout << (a[i][j] ? "*" : ".");
    }
    cout << endl;
  }
}