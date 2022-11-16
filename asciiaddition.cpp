#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um = {
    {"xxxxxx...xx...xx...xx...xx...xxxxxx", 0},
    {"....x....x....x....x....x....x....x", 1},
    {"xxxxx....x....xxxxxxx....x....xxxxx", 2},
    {"xxxxx....x....xxxxxx....x....xxxxxx", 3},
    {"x...xx...xx...xxxxxx....x....x....x", 4},
    {"xxxxxx....x....xxxxx....x....xxxxxx", 5},
    {"xxxxxx....x....xxxxxx...xx...xxxxxx", 6},
    {"xxxxx....x....x....x....x....x....x", 7},
    {"xxxxxx...xx...xxxxxxx...xx...xxxxxx", 8},
    {"xxxxxx...xx...xxxxxx....x....xxxxxx", 9},
};

unordered_map<int, string> umm = {
    {0, "xxxxxx...xx...xx...xx...xx...xxxxxx"},
    {1, "....x....x....x....x....x....x....x"},
    {2, "xxxxx....x....xxxxxxx....x....xxxxx"},
    {3, "xxxxx....x....xxxxxx....x....xxxxxx"},
    {4, "x...xx...xx...xxxxxx....x....x....x"},
    {5, "xxxxxx....x....xxxxx....x....xxxxxx"},
    {6, "xxxxxx....x....xxxxxx...xx...xxxxxx"},
    {7, "xxxxx....x....x....x....x....x....x"},
    {8, "xxxxxx...xx...xxxxxxx...xx...xxxxxx"},
    {9, "xxxxxx...xx...xxxxxx....x....xxxxxx"},
};

string s;

int main()
{
  cin >> s;
  int r = 7, c = s.length();
  char a[r][c];
  for (int i = 0; i < c; i++)
  {
    a[0][i] = s[i];
  }
  for (int i = 1; i < r; i++)
  {
    cin >> s;
    for (int j = 0; j < c; j++)
    {
      a[i][j] = s[j];
    }
  }
  int d = (c + 1) / 6;
  int total = 0;
  string curr = "";
  for (int i = 0; i < d; i++)
  {
    string res = "";
    for (int j = 0; j < r; j++)
    {
      for (int k = 0; k < 5; k++)
      {
        res += a[j][k + i * 6];
      }
    }
    auto iter = um.find(res);
    if (iter == um.end())
    {
      total += stoi(curr);
      curr = "";
    }
    else
    {
      curr += to_string(iter->second);
    }
  }
  total += stoi(curr);
  c = to_string(total).length() * 6 - 1;
  d = to_string(total).length();
  char b[r][c];
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      b[i][j] = '.';
    }
  }
  for (int i = 0; i < d; i++)
  {
    for (int j = 0; j < r; j++)
    {
      for (int k = 0; k < 5; k++)
      {
        b[j][i * 6 + k] = umm[to_string(total)[i] - '0'][j * 5 + k];
      }
    }
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << b[i][j];
    }
    cout << endl;
  }
}