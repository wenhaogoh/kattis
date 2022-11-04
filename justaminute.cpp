#include <iostream>
#include <iomanip>
using namespace std;

int n;
double tmm, ts, m, s, avg;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> m >> s;
    tmm += m;
    ts += s;
    n--;
  }
  avg = ts / (tmm * 60.0);
  if (avg <= 1)
  {
    cout << "measurement error" << endl;
  }
  else
  {
    cout << fixed << setprecision(9) << avg << endl;
  }
}