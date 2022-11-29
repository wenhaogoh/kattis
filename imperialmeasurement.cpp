#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <iomanip>
using namespace std;

double v;
string from, to;

unordered_map<string, string> translate = {
    {"th", "thou"},
    {"thou", "thou"},
    {"in", "inch"},
    {"inch", "inch"},
    {"ft", "foot"},
    {"foot", "foot"},
    {"yd", "yard"},
    {"yard", "yard"},
    {"ch", "chain"},
    {"chain", "chain"},
    {"fur", "furlong"},
    {"furlong", "furlong"},
    {"mi", "mile"},
    {"mile", "mile"},
    {"lea", "league"},
    {"league", "league"},
};

string unit[8] = {"thou", "inch", "foot", "yard", "chain", "furlong", "mile", "league"};
double factor[7] = {1000, 12, 3, 22, 10, 8, 3};

int main()
{
  cin >> v >> from >> to >> to;
  from = translate[from];
  to = translate[to];
  int fromPos = distance(unit, find(begin(unit), end(unit), from));
  int toPos = distance(unit, find(begin(unit), end(unit), to));
  if (fromPos < toPos)
  {
    for (int i = fromPos; i < toPos; i++)
    {
      v /= factor[i];
    }
  }
  else
  {
    for (int i = fromPos - 1; i >= toPos; i--)
    {
      v *= factor[i];
    }
  }
  cout << fixed << setprecision(10) << v << endl;
}