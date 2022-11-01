#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int tc, a, p, q, n;
string pq;
vector<string> seq;
vector<string> split(string, string);

int main()
{
  cin >> tc;
  for (int i = 0; i < tc; i++)
  {
    cin >> a >> pq;
    vector<string> pqv = split(pq, "/");
    seq.clear();
    p = stoi(pqv[0]), q = stoi(pqv[1]), n = 1;
    while (p != q)
    {
      if (p > q)
      {
        // is a right child
        p = p - q;
        seq.push_back("r");
      }
      else
      {
        // is a left child
        q = q - p;
        seq.push_back("l");
      }
    }
    for (int j = seq.size() - 1; j >= 0; j--)
    {
      n *= 2;
      if (seq[j] == "r")
      {
        n += 1;
      }
    }
    cout << a << " " << n << "\n";
  }
}

vector<string> split(string s, string delim)
{
  size_t start = 0, end, delim_len = delim.length();
  vector<string> res;

  while ((end = s.find(delim, start)) != string::npos)
  {
    res.push_back(s.substr(start, end - start));
    start = end + delim_len;
  }

  res.push_back(s.substr(start));
  return res;
}