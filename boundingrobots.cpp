#include <iostream>
using namespace std;

int w, l, n, v;
char d;

int main()
{
  while (cin >> w >> l && (w != 0 || l != 0))
  {
    cin >> n;
    int ax = 0, ay = 0, tx = 0, ty = 0;
    while (n > 0)
    {
      cin >> d >> v;
      if (d == 'u')
      {
        ty += v;
        ay = min(l - 1, ay + v);
      }
      else if (d == 'd')
      {
        ty -= v;
        ay = max(0, ay - v);
      }
      else if (d == 'l')
      {
        tx -= v;
        ax = max(0, ax - v);
      }
      else
      {
        tx += v;
        ax = min(w - 1, ax + v);
      }
      n--;
    }
    cout << "Robot thinks " << tx << " " << ty << endl;
    cout << "Actually at " << ax << " " << ay << endl
         << endl;
  }
}