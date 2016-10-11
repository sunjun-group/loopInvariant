#include "assert.h"

int __BLAST_NONDET;

void main() {
  int i, j, k, n, l, m;

  if (3 * n <= m + l);
  else goto END;
  // invariant (0 <= i && i <= n)
  for (i = 0; i < n; i++)
  	// invariant (2*i <= j && j <= 3*i)
    for (j = 2 * i; j < 3 * i; j++)
      // invariant (i <= k && k <= j)
      for (k = i; k < j; k++)
        assert(k - i <= 2 * n);
  END:
}