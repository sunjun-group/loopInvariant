#include <assert.h>

void main() {
  int n;
  int i = 0;
  int k = 0;
  // invariant (0 <= i && i <= n)
  // invariant (k == i)
  while( i < n ) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    i++;
    k++;
  }
  int j = 0;
  // invariant (0 <= j && j <= n)
  // invariant (k + j/2 == n)
  while( j < n ) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    if(k <= 0) ERROR:;
    j = j + 2;
    k--;
  }
}
