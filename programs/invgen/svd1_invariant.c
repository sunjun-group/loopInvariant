#include < math.h >
#include "nrutil.h"

int NONDET;

void main(int n) {
  int i, j, k, l;

  tmpl("(le(n,l,i,j,k),le(n,l,i,j,k))");

  assume(l > 0);

  // invariant (n >= i && i >= 0)
  for (i = n; i >= 1; i--) { // Accumulation of right-hand transformations. 
    if (i < n) {
      if (NONDET) {
        // invariant (l <= j && j <= n + 1)
        for (j = l; j <= n; j++) { // Double division to avoid possible underflow.   
          assert(1 <= j);
          assert(j <= n);
          assert(1 <= i);
          assert(i <= n);
          //assert(1<=i);assert(i<=m); // TODO feasible counterexample found
          assert(1 <= l);
          assert(l <= n);
        }
        // invariant (l <= j && j <= n + 1)
        for (j = l; j <= n; j++) {
          // invariant (l <= k && k <= n + 1)
          for (k = l; k <= n; k++) {
            //assert(1<=i);assert(i<=m); // TODO feasible counterexample found
            assert(1 <= k);
            assert(k <= n);
            assert(1 <= j);
            assert(j <= n);
          }
          // invariant (l <= k && k <= n + 1)
          for (k = l; k <= n; k++) {
            assert(1 <= k);
            assert(k <= n);
            assert(1 <= j);
            assert(j <= n);
            assert(1 <= i);
            assert(i <= n);
          }
        }
      }
      // invariant (l <= k && k <= n + 1)
      for (j = l; j <= n; j++) {
        assert(1 <= j);
        assert(j <= n);
        assert(1 <= i);
        assert(i <= n);
      }
    }

    assert(1 <= i);
    assert(i <= n);
    assert(1 <= i);
    assert(i <= n);
    l = i;
  }
}