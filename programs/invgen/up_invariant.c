#include <assert.h>

void main() {
  int n;
  int i = 0;
  int k = 0;
  tmpl("(le(i,j,k,n),le(i,j,k,n))");
  // invariant (0 <= i && i <= n)
  // invariant (k == i)
  while( i < n ) {
	i++;
	k++;
  }
  int j = 0;
  // invariant (0 <= j && j <= n)
  // invariant (k + j == n)
  while( j < n ) {
    assert (k > 0);
    j++;
    k--;
  }
}
