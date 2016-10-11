 #include <assert.h>

int NONDET;

void main() {
  int i,j,k,n;

  //tmpl("le(n,i,j,k)");
  tmpl("(le(n,i,j,k),le(n,i,j,k))");
  
  for (i=0;i<n;i++)
  	// invariant (i <= j && j <= n)
    for (j=i;j<n;j++)
      // invariant (j <= k && k <= n)
      for (k=j;k<n;k++)
	    assert(k>=i);
}
