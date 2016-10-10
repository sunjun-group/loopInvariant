#include "assert.h"
int __BLAST_NONDET;

void foo( ){
  int n,l,r,i,j;
  
  assume(1 <= n);
  l = n + 1;
  n=n+n;
  r = n;
  if(l>1) {
    l--;
  } else {
    r--;
  }
  while(r > 1) {
    i = l;
    j = 2*l;
    while(j <= r) {
      if( j < r) {
	assert(1 <= j);assert(j <= n);
	assert(1 <= j+1);assert(j+1 <= n);
	if( __BLAST_NONDET )
	  j = j + 1;
      }
      assert(1 <= j);assert(j <= n);
      if( __BLAST_NONDET ) { 
      	break;
      }
      assert(1 <= i);
      assert(i <= n);
      assert(1 <= j);
      assert(j <= n);
      i = j;
      j = 2*j;
    }
    if(l > 1) {
      assert(1 <= l);assert(l <= n);
      l--;
    } else {
      assert(1 <= r);assert(r <= n);
      r--;
    }
  }
 }