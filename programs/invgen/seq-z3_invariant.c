#include < assert.h >

void main() {
  int n0, n1;
  int i = 0;
  int k = 0;

  // invariant (0 <= i && i <= 20 * n0)
  // invariant (k == i)
  while (i < 20 * n0) {
    i++;
    k++;
  }
  i = 0;
  // invariant (0 <= i && i <= 6 * n1 + 128)
  // invariant (k == i + 20 * n0)
  while (i < 6 * n1 + 128) {
    i++;
    k++;
  }
  i = 0;
  // invariant (0 <= i && i <= 6 * n1 + 128)
  // invariant (k + i == 20 * n0 + 6 * n1 + 128)
  while (i < 6 * n1 + 128) {
    i++;
    k--;
  }
  i = 0;
  // invariant (0 <= i && i <= 20 * n0)
  // invariant (k + i == 20 * n0)
  while (i < 20 * n0) {
    assert(k > 0);
    i++;
    k--;
  }
  return 0;
}