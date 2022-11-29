#include <iostream>
#include <vector>
using namespace std;

string s;

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

int main()
{
  while (getline(cin, s))
  {
    vector<string> toks = split(s, " ");
    vector<string> start = split(toks[3], ":");
    vector<string> end = split(toks[4], ":");
    int hour = stoi(end[0]) - stoi(start[0]);
    int startMin = stoi(start[1]);
    int endMin = stoi(end[1]);
    int min;
    if (endMin < startMin)
    {
      min = 60 - startMin + endMin;
      hour--;
    }
    else
    {
      min = endMin - startMin;
    }
    cout << toks[0] << " " << toks[1] << " " << toks[2] << " " << hour << " hours " << min << " minutes" << endl;
  }
}