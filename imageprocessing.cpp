#include <iostream>
using namespace std;

int h, w, n, m;

int main()
{
  cin >> h >> w >> n >> m;
  int image[h][w], kernal[n][m];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cin >> image[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> kernal[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m / 2; j++)
    {
      int temp = kernal[i][j];
      kernal[i][j] = kernal[i][m - j - 1];
      kernal[i][m - j - 1] = temp;
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int temp = kernal[i][j];
      kernal[i][j] = kernal[n - i - 1][j];
      kernal[n - i - 1][j] = temp;
    }
  }
  for (int i = 0; i <= h - n; i++)
  {
    for (int j = 0; j <= w - m; j++)
    {
      int total = 0;
      for (int k = 0; k < n; k++)
      {
        for (int l = 0; l < m; l++)
        {
          total += kernal[k][l] * image[i + k][j + l];
        }
      }
      cout << total << " ";
    }
    cout << endl;
  }
}