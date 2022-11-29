#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
string s;

vector<string> split(string, string);

int main()
{
  cin >> n;
  while (n--)
  {
    cin >> s;
    vector<string> toks = split(s, ",");
    size_t base = 0, total = 0;
    for (int i = toks.size() - 1; i >= 0; i--)
    {
      string tok = toks[i];
      int d = tok.length() == 0 ? 0 : stoi(tok);
      total += d * pow(60, base);
      base++;
    }
    cout << total << endl;
  }
}

vector<string> split(string s, string delim)
{
  vector<string> res;
  size_t pos = 0, next;
  while ((next = s.find(delim, pos)) != string::npos)
  {
    res.push_back(s.substr(pos, next - pos));
    pos = next + delim.length();
  }
  res.push_back(s.substr(pos));
  return res;
}
