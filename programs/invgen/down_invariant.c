#include <assert.h>

void main() {
  int n;
  int k = 0;
  int i = 0;
  tmpl("(le(i,j,k,n),le(i,j,k,n))");
  // invariant (k == i && i <= n)
  while( i < n ) {
	  i++;
	  k++;
  }
  int j = n;
  // invariant (k == j && j >= 0)
  while( j > 0 ) {
	  assert(k > 0);
	  j--;
	  k--;
  }
}
