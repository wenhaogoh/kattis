#include <iostream>
#include <vector>
using namespace std;

char a[5][5];
int c;
string s;
vector<pair<int, int>> directions = {
    {1, 2},
    {1, -2},
    {2, 1},
    {2, -1},
    {-1, 2},
    {-1, -2},
    {-2, 1},
    {-2, -1},
};

int main()
{
  for (int i = 0; i < 5; i++)
  {
    cin >> s;
    for (int j = 0; j < 5; j++)
    {
      a[i][j] = s[j];
      if (s[j] == 'k')
      {
        c++;
      }
    }
  }
  if (c != 9)
  {
    cout << "invalid" << endl;
    return 0;
  }
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (a[i][j] == 'k')
      {
        for (auto &dir : directions)
        {
          int x = i + dir.first;
          int y = j + dir.second;
          if (x < 0 || x >= 5 || y < 0 || y >= 5)
          {
            continue;
          }
          if (a[x][y] == 'k')
          {
            cout << "invalid" << endl;
            return 0;
          }
        }
      }
    }
  }
  cout << "valid" << endl;
}