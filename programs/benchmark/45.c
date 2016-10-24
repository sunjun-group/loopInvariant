#include < assert.h >

int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main(int flag) {
  int x = 0;
  int y = 0;
  int j = 0;
  int i = 0;
  int c = 0;
  int d = 1;

  // invariant (x == y && j >= i)
  while (unknown1()) {
    x++;
    y++;
    i += x;
    j += y;
    if (flag) {
      j += 1;
    }
  }
  if (j >= i)
    x = y;
  else
    x = y + 1;

  int w = 1;
  int z = 0;
  // invariant (w%2 == 1 && z%2 == 0 && x == y)
  while (unknown2()) {
    // invariant (w%2 == 1 && z%2 == 0 && x == y)
    while (unknown3()) {
      if (w % 2 == 1)
        x++;
      if (z % 2 == 0)
        y++;
    }
    z = x + y;
    w = z + 1;
  }
  static_assert(x == y);
}