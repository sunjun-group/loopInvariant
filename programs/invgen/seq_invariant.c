#include <assert.h>

void main() {
  int n0, n1;
  int i0 = 0;
  int k = 0;

  // invariant (0 <= i0 && i0 <= n0)
  // invariant (k == i0)
  while( i0 < n0 ) {
    tmpl("(le(n0,n1,i0,i1,j1,k),le(n0,n1,i0,i1,j1,k))");
    i0++;
    k++;
  }
  int i1 = 0;
  // invariant (0 <= i1 && i1 <= n1)
  // invariant (k == i1 + n0)
  while( i1 < n1 ) {
    tmpl("(le(n0,n1,i0,i1,j1,k),le(n0,n1,i0,i1,j1,k))");
    i1++;
    k++;
  }
  int j1 = 0;
  // invariant (0 <= j1 && j1 <= n0 + n1)
  // invariant (k + j1 == n0 + n1)
  while( j1 < n0 + n1 ) {
    tmpl("(le(n0,n1,i0,i1,j1,k),le(n0,n1,i0,i1,j1,k))");
    if(k <= 0) ERROR:;    
    j1++;
    k--;
  }
}
