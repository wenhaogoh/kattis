#include <iostream>
#include <vector>
using namespace std;

int p;

int main()
{
  cin >> p;
  for (int i = 1; i <= p; i++)
  {
    int res = 0, k;
    vector<int> line;
    cin >> k;
    for (int j = 0; j < 20; j++)
    {
      int a;
      cin >> a;
      if (line.empty())
      {
        line.push_back(a);
        continue;
      }
      bool canFind = false;
      for (int k = 0; k < line.size(); k++)
      {
        if (line[k] > a)
        {
          canFind = true;
          res += line.size() - k;
          line.insert(line.begin() + k, a);
          break;
        }
      }
      if (!canFind)
      {
        line.push_back(a);
      }
    }
    cout << k << " " << res << endl;
  }
}