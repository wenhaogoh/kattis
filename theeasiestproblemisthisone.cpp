#include <iostream>
using namespace std;

int n;

int getSumOfDigits(int n);

int main()
{
  while (cin >> n && n != 0)
  {
    int t = getSumOfDigits(n);
    int p = 11;
    while (true)
    {
      if (getSumOfDigits(p * n) == t)
      {
        cout << p << endl;
        break;
      }
      p++;
    }
  }
}

int getSumOfDigits(int n)
{
  int sum = 0;
  while (n != 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}