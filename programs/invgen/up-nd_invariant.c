#include < assert.h >

void main() {
  int n, v;
  int i = 0;
  int k = 0;
  // invariant (0 <= i && i <= n)
  // invariant (k >= i)
  while (i < n) {
    tmpl("(le(v,i,j,k,n),le(v,i,j,k,n))");
    i++;
    v = rand();
    if (v > 0)
      k = k + v;
    else
      k++;
  }
  int j = 0;
  // invariant (k + j >= n)
  while (j < n) {
    tmpl("(le(v,i,j,k,n),le(v,i,j,k,n))");
    if (k <= 0) ERROR: ;
    j++;
    k--;
  }
}