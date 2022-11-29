#include <iostream>
using namespace std;

string s;
int res;

int getDistance(char c, int row, int col)
{
  int originalRow = (c - 'A') / 4;
  int originalCol = (c - 'A') % 4;
  return abs(originalRow - row) + abs(originalCol - col);
}

int main()
{
  for (int i = 0; i < 4; i++)
  {
    cin >> s;
    for (int j = 0; j < 4; j++)
    {
      if (s[j] == '.')
        continue;
      res += getDistance(s[j], i, j);
    }
  }
  cout << res << endl;
}