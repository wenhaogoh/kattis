#include <iostream>
#include <cmath>
using namespace std;

string s;
double t = 0;

int main()
{
  getline(cin, s);
  for (auto &c : s)
  {
    t += int(c);
  }
  int avg = floor(t / s.length());
  cout << char(avg) << endl;
}