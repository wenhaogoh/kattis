#include <iostream>
#include <vector>
using namespace std;

int x, y, n;
string s;
vector<string> moves;

enum direction
{
  north,
  south,
  east,
  west
};

string getOther(string s)
{
  if (s == "Forward")
  {
    return "Right";
  }
  else if (s == "Right")
  {
    return "Left";
  }
  else
  {
    return "Forward";
  }
}

string getOther2(string s)
{
  if (s == "Forward")
  {
    return "Left";
  }
  else if (s == "Right")
  {
    return "Forward";
  }
  else
  {
    return "Right";
  }
}

bool canReach()
{
  int cx = 0, cy = 0, dir = north;
  for (auto &move : moves)
  {
    if (move == "Forward")
    {
      switch (dir)
      {
      case north:
        cy++;
        break;
      case south:
        cy--;
        break;
      case east:
        cx++;
        break;
      case west:
        cx--;
        break;
      }
    }
    else if (move == "Left")
    {
      switch (dir)
      {
      case north:
        dir = west;
        break;
      case south:
        dir = east;
        break;
      case east:
        dir = north;
        break;
      case west:
        dir = south;
        break;
      }
    }
    else
    {
      switch (dir)
      {
      case north:
        dir = east;
        break;
      case south:
        dir = west;
        break;
      case east:
        dir = south;
        break;
      case west:
        dir = north;
        break;
      }
    }
  }
  return cx == x && cy == y;
}

int main()
{
  cin >> x >> y >> n;
  while (n > 0)
  {
    cin >> s;
    moves.push_back(s);
    n--;
  }
  for (int i = 0; i < moves.size(); i++)
  {
    string move = moves[i];
    moves[i] = getOther(move);
    if (canReach())
    {
      cout << i + 1 << " " << moves[i] << endl;
      return 0;
    }
    moves[i] = getOther2(move);
    if (canReach())
    {
      cout << i + 1 << " " << moves[i] << endl;
      return 0;
    }
    moves[i] = move;
  }
}