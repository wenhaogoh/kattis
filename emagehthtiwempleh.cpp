#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string s, string delim);

char b[8][8];
vector<string> v;
string s;

int main()
{
  for (int r = 7; r >= 0; r--)
  {
    for (int c = 0; c < 8; c++)
    {
      char dots = (r + c) % 2 == 0 ? ':' : '.';
      b[r][c] = dots;
    }
  }
  cin >> s >> s;
  v = split(s, ",");
  for (auto &vi : v)
  {
    size_t r, c;
    char n;
    if (vi.length() == 2)
    {
      n = 'P';
      r = vi[1] - '0' - 1;
      c = vi[0] - 'a';
    }
    else
    {
      n = vi[0];
      r = vi[2] - '0' - 1;
      c = vi[1] - 'a';
    }
    b[r][c] = n;
  }
  v.clear();
  cin >> s >> s;
  v = split(s, ",");
  for (auto &vi : v)
  {
    size_t r, c;
    char n;
    if (vi.length() == 2)
    {
      n = 'p';
      r = vi[1] - '0' - 1;
      c = vi[0] - 'a';
    }
    else
    {
      n = tolower(vi[0]);
      r = vi[2] - '0' - 1;
      c = vi[1] - 'a';
    }
    b[r][c] = n;
  }
  for (int r = 7; r >= 0; r--)
  {
    for (size_t i = 0; i < 8; i++)
    {
      cout << "+---";
    }
    cout << "+" << endl;
    for (int c = 0; c < 8; c++)
    {
      string dots = (r + c) % 2 == 0 ? ":" : ".";
      cout << "|"
           << dots << b[r][c] << dots;
    }
    cout << "|" << endl;
  }
  for (size_t i = 0; i < 8; i++)
  {
    cout << "+---";
  }
  cout << "+" << endl;
}

vector<string> split(string s, string delim)
{
  vector<string> res;
  size_t pos = 0, next = 0;
  while ((next = s.find(delim, pos)) != string::npos)
  {
    res.push_back(s.substr(pos, next - pos));
    pos = next + delim.length();
  }
  res.push_back(s.substr(pos));
  return res;
}