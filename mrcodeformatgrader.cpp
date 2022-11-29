#include <iostream>
#include <vector>
using namespace std;

int c, n, p, errCount;
vector<pair<int, int>> corrects;
vector<pair<int, int>> errors;

int main()
{
  cin >> c >> n;
  while (n--)
  {
    int x;
    cin >> x;
    if (!p)
    {
      errCount = 1;
    }
    else if (x - p == 1)
    {
      errCount++;
    }
    else
    {
      errors.push_back({p - errCount + 1, p});
      errCount = 1;
    }
    p = x;
  }
  if (errCount)
  {
    errors.push_back({p - errCount + 1, p});
  }
  for (int i = 0; i < errors.size(); i++)
  {
    pair<int, int> err = errors[i];
    if (i == 0 && err.first == 1)
    {
      continue;
    }
    else if (i == 0)
    {
      corrects.push_back({1, err.first - 1});
    }
    else
    {
      pair<int, int> prevErr = errors[i - 1];
      corrects.push_back({prevErr.second + 1, err.first - 1});
    }
    if (i == errors.size() - 1 && err.second < c)
    {
      corrects.push_back({err.second + 1, c});
    }
  }

  cout << "Errors: ";
  for (int i = 0; i < errors.size(); i++)
  {
    pair<int, int> err = errors[i];
    if (err.first == err.second)
    {
      cout << err.first;
    }
    else
    {
      cout << err.first << "-" << err.second;
    }

    if (i < errors.size() - 2)
    {
      cout << ", ";
    }
    else if (i == errors.size() - 2)
    {
      cout << " and ";
    }
  }
  cout << endl;

  cout << "Correct: ";
  for (int i = 0; i < corrects.size(); i++)
  {
    pair<int, int> corr = corrects[i];
    if (corr.first == corr.second)
    {
      cout << corr.first;
    }
    else
    {
      cout << corr.first << "-" << corr.second;
    }

    if (i < corrects.size() - 2)
    {
      cout << ", ";
    }
    else if (i == corrects.size() - 2)
    {
      cout << " and ";
    }
  }
  cout << endl;
}