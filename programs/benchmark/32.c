#include <assert.h>

/*
 * "split.c" from InvGen benchmark suite
 */


void main() {
  int k = 100;
  int b;
  int i;
  int j;
  int n;
  i = j;
  // invariant (n % 2 == 1 || i == j)
  // invariant (0 <= n && n <= 2 * k)
  for( n = 0 ; n < 2*k ; n++ ) {
    if(b) {
      i++;
    } else {
      j++;
    }
    b = !b;
  }
  static_assert(i == j);
}
