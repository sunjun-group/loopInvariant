#include "assert.h"

int __BLAST_NONDET;

void main() {
  int i,j,k,n;

  if( k == n); else goto END;

  for (i = 0; i < n; i++) {
    // invariant (i * 2 <= j && j <= n)
    for (j = 2 * i; j < n; j++) {
      if( __BLAST_NONDET ) {
        // invariant (j <= k && k <= n)
	      for (k = j; k < n; k++) {
	        assert(k >= 2 * i);
	      }
      }
      else {
	      assert( k >= n );
	      assert( k <= n );
      }
    }
  }
  END:
}
