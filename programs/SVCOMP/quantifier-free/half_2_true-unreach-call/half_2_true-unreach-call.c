#include "assert.h"

int main() {
  int n,i,k;
  n = __VERIFIER_nondet_int();
  __VERIFIER_assume(n <= LARGE_INT);
  k = n;
  i = 0;

  // invariant (i/2 + k == n)
  while( i < n ) {
    k--;
    i = i + 2;
  }

  int j = 0;
 
  // invariant ( (k + j) >= (n - 1)/2 )
  while( j < n/2 ) {
    __VERIFIER_assert(k > 0);
    k--;
    j++;
  }
  return 0;
}