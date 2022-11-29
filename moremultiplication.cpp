#include <iostream>
using namespace std;

int a, b;

int main()
{
  while (cin >> a >> b && a + b != 0)
  {
    string as = to_string(a), bs = to_string(b);
    int alen = as.length(), blen = bs.length();
    int r = blen * 4 + 5, c = alen * 4 + 5;
    string product = to_string(a * b);
    char res[r][c];
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        if ((i == 0 || i == r - 1) && (j == 0 || j == c - 1))
        {
          res[i][j] = '+';
        }
        else if (i == 0 || i == r - 1)
        {
          res[i][j] = '-';
        }
        else if (j == 0 || j == c - 1)
        {
          res[i][j] = '|';
        }
        else
        {
          res[i][j] = ' ';
        }
      }
    }
    for (int i = 0; i < alen; i++)
    {
      res[1][4 + i * 4] = as[i];
    }
    for (int i = 0; i < blen; i++)
    {
      res[4 + i * 4][c - 2] = bs[i];
    }
    for (int i = 0; i < alen; i++)
    {
      res[r - 2][3 + i * 4] = product[i + product.length() - alen];
      res[r - 2][1 + i * 4] = '/';
    }
    string firstHalf = product.substr(0, product.length() - alen);
    for (int i = 0; i < firstHalf.length(); i++)
    {
      res[5 + (blen - 1 - i) * 4][1] = firstHalf[firstHalf.length() - 1 - i];
      res[7 + (blen - 1 - i) * 4][1] = '/';
    }
    if (firstHalf.empty())
    {
      res[r - 2][1] = ' ';
    }
    for (int i = 0; i < blen; i++)
    {
      for (int j = 0; j < alen; j++)
      {
        int ad = as[j] - '0';
        int bd = bs[i] - '0';
        int product = ad * bd;
        for (int k = 0; k < 5; k++)
        {
          for (int l = 0; l < 5; l++)
          {
            int ii = 2 + i * 4 + k, jj = 2 + j * 4 + l;
            if ((k == 0 || k == 4) && (l == 0 || l == 4))
            {
              res[ii][jj] = '+';
            }
            else if (k == 0 || k == 4)
            {
              res[ii][jj] = '-';
            }
            else if (l == 0 || l == 4)
            {
              res[ii][jj] = '|';
            }
            else if (k + l == 4)
            {
              res[ii][jj] = '/';
            }
            else if (k == 1 && l == 1)
            {
              res[ii][jj] = char(product / 10 + '0');
            }
            else if (k == 3 && l == 3)
            {
              res[ii][jj] = char(product % 10 + '0');
            }
          }
        }
      }
    }
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        cout << res[i][j];
      }
      cout << endl;
    }
  }
}