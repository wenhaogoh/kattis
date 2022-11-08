#include <iostream>
using namespace std;

int n, dm, k;
bool hasNever = true;

int main()
{
  cin >> n >> dm;
  while (n > 0)
  {
    int di;
    cin >> di;
    if (di > dm)
    {
      k++;
    }
    else
    {
      hasNever = false;
      break;
    }
    n--;
  }
  if (hasNever)
  {
    cout << "It had never snowed this early!" << endl;
  }
  else
  {
    cout << "It hadn't snowed this early in " << k << " years!" << endl;
  }
}
