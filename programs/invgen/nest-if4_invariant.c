 #include <assert.h>

int NONDET;

void main() {
  int i,k,n,l;

  tmpl("(le(n,i,k,l),le(n,i,k,l))");

  assume(l>0);

  // invariant (1 <= k && k <= n)
  for (k=1;k<n;k++){
    if(NONDET) {
      // invariant (l <= i && i <= n)
      for (i=l;i<n;i++)
    }
	assert(1<=i);
    // invariant (l <= i && i <= n)
    for (i=l;i<n;i++);
  }

 }
