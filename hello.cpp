#include <iostream>
using namespace std;

// enum

enum Direction
{
  NORTH,  // 0
  EAST,   // 1
  SOUTH,  // 2
  WEST    // 3
};

void move(Direction d)
{
  if (d == NORTH)
  {
    cout << "Moving North 🚀" << endl;
  }
  else if (d == EAST)
  {
    cout << "Moving East 👉" << endl;
  }
  else if (d == SOUTH)
  {
    cout << "Moving South 👇" << endl;
  }
  else if (d == WEST)
  {
    cout << "Moving West 👈" << endl;
  }
}

int main()
{
  Direction d = SOUTH;
  move(d);

  d = WEST;
  move(d);

  return 0;
}
