#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> v;

int main()
{
  cin >> n;
  while (n > 0)
  {
    cin >> a;
    v.push_back(a);
    n--;
  }
  for (int i = v.size() - 1; i >= 0; i--)
  {
    cout << v[i] << endl;
  }
}