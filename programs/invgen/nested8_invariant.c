#include "assert.h"

int __BLAST_NONDET;

void main() {
  int i, j, k, n, m;

  if (n <= m);
  else goto END;
  // invariant (0 <= i && i <= n)
  for (i = 0; i < n; i++)
  	// invariant (0 <= j && j <= n)
    for (j = 0; j < n; j++)
      // invariant (j <= k && k <= n + m)
      for (k = j; k < n + m; k++)
        assert(i + j <= n + k + m);
  END:
}