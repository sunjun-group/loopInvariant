#include "assert.h"

int main() {
	int n;
	int k = 0;
	int i = 0;
	n = __VERIFIER_nondet_int();

	// invariant (k == i && i <= n)
	while (i < n) {
		i++;
		k++;
	}
	int j = n;
	// invariant (j == k)
	while (j > 0) {
		__VERIFIER_assert(k > 0);
		j--;
		k--;
	}

	return 0;
}