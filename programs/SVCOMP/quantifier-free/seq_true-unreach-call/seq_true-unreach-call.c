#include "assert.h"

int main() {
  int n0, n1;
  int i0 = 0;
  int k = 0;

  n0 = __VERIFIER_nondet_int();
  n1 = __VERIFIER_nondet_int();
  __VERIFIER_assume(-LARGE_INT <= n0 && n0 < LARGE_INT);
  __VERIFIER_assume(-LARGE_INT <= n1 && n1 < LARGE_INT);

  // invariant (k == i0 && i0 <= n0)
  while( i0 < n0 ) {
    i0++;
    k++;
  }

  int i1 = 0;
  // invariant (k - n0 == i1 && i1 <= n1)
  while( i1 < n1 ) {
    i1++;
    k++;
  }

  int j1 = 0;
  // invariant (k + j1 == n0 + n1)
  while( j1 < n0 + n1 ) {
      __VERIFIER_assert(k > 0);
      j1++;
      k--;
  }
}