#include <iostream>
#include <vector>
using namespace std;

typedef pair<double, double> dd;

int nx, ny;
double w, x, y;

int main()
{
  while (cin >> nx >> ny >> w && nx != 0 && ny != 0 && w != 0)
  {
    vector<dd> vx = {{0, 75}};
    vector<dd> vy = {{0, 100}};
    // for (auto &field : vx)
    // {
    //   cout << "(" << field.first << "," << field.second << ")"
    //        << ",";
    // }
    // cout << endl;
    while (nx--)
    {
      cin >> x;
      double start = x - w / 2;
      double end = x + w / 2;
      for (int i = 0; i < vx.size(); i++)
      {
        dd field = vx[i];
        if (start <= field.first && end >= field.second)
        {
          // width covers entire portion
          vx.erase(vx.begin() + i);
          i--;
        }
        else if (start > field.first && end < field.second)
        {
          // width splits field into two
          dd second = {end, field.second};
          vx[i].second = start;
          vx.insert(vx.begin() + i + 1, second);
          break;
        }
        else if (start <= field.first && end >= field.first)
        {
          vx[i].first = end;
          break;
        }
        else if (start <= field.second && end >= field.second)
        {
          vx[i].second = start;
        }
      }
      // for (auto &field : vx)
      // {
      //   cout << "(" << field.first << "," << field.second << ")"
      //        << ",";
      // }
      // cout << endl;
    }
    while (ny--)
    {
      cin >> y;
      double start = y - w / 2;
      double end = y + w / 2;
      for (int i = 0; i < vy.size(); i++)
      {
        dd field = vy[i];
        if (start <= field.first && end >= field.second)
        {
          // width covers entire portion
          vy.erase(vy.begin() + i);
          i--;
        }
        else if (start > field.first && end < field.second)
        {
          // width splits field into two
          dd second = {end, field.second};
          vy[i].second = start;
          vy.insert(vy.begin() + i + 1, second);
          break;
        }
        else if (start <= field.first && end >= field.first)
        {
          vy[i].first = end;
          break;
        }
        else if (start <= field.second && end >= field.second)
        {
          vy[i].second = start;
        }
      }
    }
    cout << (vx.empty() && vy.empty() ? "YES" : "NO") << endl;
  }
}