#include <iostream>
using namespace std;

int n, s, res;
string order;

int main()
{
  cin >> n >> s;
  int water = s;
  while (n--)
  {
    cin >> order;
    int req;
    if (order[order.length() - 1] == 'L')
    {
      req = stoi(order.substr(0, order.length() - 1)) + 1;
    }
    else
    {
      req = stoi(order);
    }
    if (water < req)
    {
      water = s;
      water -= req;
      res++;
    }
    else
    {
      water -= req;
    }
  }
  cout << res << endl;
}