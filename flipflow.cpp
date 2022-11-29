#include <iostream>
using namespace std;

int t, s, n, a;

int main()
{
  cin >> t >> s >> n;
  int lower = s, upper = 0, time = 0;
  while (n--)
  {
    cin >> a;
    int elapsed = a - time;
    int delta = min(elapsed, upper);
    lower += delta;
    upper -= delta;
    int temp = lower;
    lower = upper;
    upper = temp;
    time = a;
  }
  int elapsed = t - time;
  int delta = min(elapsed, upper);
  lower += delta;
  upper -= delta;
  cout << upper << endl;
}