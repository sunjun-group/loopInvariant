#include < assert.h >

int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main() {
  int w = 1, z = 0, x = 0, y = 0;
  // invariant (w % 2 == 1 && z % 2 == 0 && x == y)
  while (unknown1()) {
    // invariant (w % 2 == 1 && z % 2 == 0 && x == y)
    while (unknown2()) {
      if (w % 2 == 1)
        x++;
      if (z % 2 == 0)
        y++;
    }
    // invariant (w % 2 == 1 && z % 2 == 0)
    while (unknown4()) {
      z = x + y;
      w = z + 1;
    }
  }
  static_assert(x == y);
}