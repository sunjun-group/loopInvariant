
#include <assert.h>

void main() {
  int n, m;
  int i = 0;
  int k = 0;

  // invariant (0 <= i && i <= n)
  // invariant (k == i)
  while( i < n ) {
    i++;
    k++;
  }

  i = 0;
  // invariant (0 <= i && i <= m)
  // invariant (k == i + n)
  while( i < m ) {
    i++;
    k++;
  }

  i = 0;
  // invariant (0 <= i && i <= m)
  // invariant (k + i == n + m)
  while( i < m ) {
    i++;
    k--;
  }

  i = 0;
  // invariant (0 <= i && i <= n)
  // invariant (k + i == n)
  while( i < n ) {
    assert(k > 0);
    i++;
    k--;
  }
  return 0;
}
