#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> um = {
    {"111101101101111", 0},
    {"001001001001001", 1},
    {"111001111100111", 2},
    {"111001111001111", 3},
    {"101101111001001", 4},
    {"111100111001111", 5},
    {"111100111101111", 6},
    {"111001001001001", 7},
    {"111101111101111", 8},
    {"111101111001111", 9}};
string s;

int main()
{
  getline(cin, s);
  int r = 5, c = s.length();
  char a[r][c];
  for (int i = 0; i < c; i++)
  {
    a[0][i] = s[i];
  }
  for (int i = 1; i < r; i++)
  {
    getline(cin, s);
    for (int j = 0; j < c; j++)
    {
      a[i][j] = s[j];
    }
  }
  int d = (c + 1) / 4;

  string res = "";

  for (int i = 0; i < d; i++)
  {
    string s = "";
    for (int j = 0; j < r; j++)
    {
      for (int k = 0; k < 3; k++)
      {
        if (a[j][i * 4 + k] == '*')
        {
          s += '1';
        }
        else
        {
          s += '0';
        }
      }
    }
    auto iter = um.find(s);
    if (iter == um.end())
    {
      cout << "BOOM!!" << endl;
      return 0;
    }
    res += to_string(iter->second);
  }
  cout << (stoi(res) % 6 == 0 ? "BEER!!" : "BOOM!!") << endl;
}