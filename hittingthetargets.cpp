#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int m, n, a, b, c, d, x, y;
string s;
vector<pair<string, int*>> arr;

int main() {
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> s >> a >> b >> c;
    if (s == "rectangle") {
      cin >> d;
      arr.push_back(make_pair(s, new int[4] { a, b, c, d }));
    } else {
      arr.push_back(make_pair(s, new int[3] { a, b, c }));
    }
  }
  cin >> n;
  for (int i = 0; i < n; i++) {
    int h = 0;
    cin >> x >> y;
    for (auto& p : arr) {
      if (p.first == "circle") {
        int cx = p.second[0], cy = p.second[1], cr = p.second[2];
        if ((cx - x) * (cx - x) + (cy - y) * (cy - y) <= cr * cr) {
          h++;
        }
      } else {
        int rx1 = p.second[0], ry1 = p.second[1], rx2 = p.second[2], ry2 = p.second[3];
        if (x >= rx1 && x <= rx2 && y >= ry1 && y <= ry2) {
          h++;
        }
      }
    }
    cout << h << endl;
  }
}