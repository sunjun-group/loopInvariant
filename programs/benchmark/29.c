int unknown1();
int unknown2();
int unknown3();

int main() {
  int a = 1;
  int b = 1;
  int c = 2;
  int d = 2;
  int x = 3;
  int y = 3;
  // invariant ( (x + y) % 2 == 0 && a + 1 == d && b + 1 == c)
  while (unknown1()) {
    x = a + c;
    y = b + d;
    if ((x + y) % 2 == 0) {
      a++;
      d++;
    } else {
      a--;
    }

    // invariant (b + 1 == c)
    while (unknown2()) {
      c--;
      b--;
    }
  }
  static_assert(a + c == b + d);
}