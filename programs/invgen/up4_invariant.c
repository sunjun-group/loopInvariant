#include < assert.h >

void main() {
  int n;
  int i = 0;
  int k = 0;
  // invariant (0 <= i && i <= n)
  // invariant (k == 2 * i)
  while (i < n) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    i++;
    k = k + 2;
  }
  int j = 0;
  // invariant (0 <= j && j <= n)
  // invariant (k + j == 2 * n)
  while (j < n) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    if (k <= 0) ERROR: ;
    j++;
    k--;
  }
}