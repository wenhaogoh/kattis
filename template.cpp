#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> ii;
typedef pair<string, int> si;

int main() {
  cout << "Hello World!\n";
}

vector<string> split(string s, string delim) {
  size_t start = 0, end, delim_len = delim.length();
  vector<string> res;

  while ((end = s.find(delim, start)) != string::npos) {
    res.push_back(s.substr(start, end - start));
    start = end + delim_len;
  }

  res.push_back(s.substr(start));
  return res;
}