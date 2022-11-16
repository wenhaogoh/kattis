#include <iostream>
using namespace std;

int n, m;

int main()
{
  cin >> n >> m;
  int *a = new int[n + 1];
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    a[x]++;
    a[y]++;
  }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] - i << " ";
  }
  cout << endl;
}