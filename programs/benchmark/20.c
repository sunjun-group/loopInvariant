#include < assert.h >

int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main(int x, int y, int k, int j, int i, int n) {
  assume((x + y) == k);
  int m = 0;
  j = 0;
  // invariant (x + y == k)
  // invariant (0 <= m && m < n)
  while (j < n) {
    if (j == i) {
      x++;
      y--;
    } else {
      y++;
      x--;
    }
    if (unknown1())
      m = j;
    j++;
  }
  static_assert((x + y) == k);
  
  if (n > 0) {
    static_assert(0 <= m);
    static_assert(m < n);
  }

}