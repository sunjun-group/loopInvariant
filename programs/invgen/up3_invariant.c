#include < assert.h >

void main() {
  int n;
  int i = 0;
  int k = 0;
  // invariant (0 <= i && i <= n + 1)
  // invariant (k == i/2)
  while (i < n) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    i = i + 2;
    k++;
  }
  int j = 0;
  // invariant (0 <= j && j <= n + 1)
  // invariant ( (n % 2 == 0 && k + j == n/2) || (n % 2 == 1 && k + j == n/2 + 1) )
  while (j < n) {
    tmpl("(le(i,j,k,n),le(i,j,k,n))");
    if (k <= 0) ERROR: ;
    j = j + 2;
    k--;
  }
}