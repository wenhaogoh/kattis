#include <iostream>
using namespace std;

int n, m;

int main()
{
  cin >> n >> m;
  int diff = m - n;
  if (diff >= 0)
  {
    cout << "Dr. Chaz will have " << abs(diff) << " piece" << (abs(diff) > 1 ? "s" : "") << " of chicken left over!" << endl;
  }
  else
  {
    cout << "Dr. Chaz needs " << abs(diff) << " more piece" << (abs(diff) > 1 ? "s" : "") << " of chicken!" << endl;
  }
}