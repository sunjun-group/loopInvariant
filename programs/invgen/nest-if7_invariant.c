 #include <assert.h>

int NONDET;

void main() {
  int i,j,k,n;

  tmpl("(le(n,i,j,k),le(n,i,j,k))");
  
  for (i=0;i<n;i++)
  	// invariant (j >= i)
    for (j=i;j<n;j++)
      // invariant (k >= j)
      for (k=j;k<n;k++)
		if(NONDET){
		  assert(k>=j);
		  assert(j>=i);
		  //	  assert(i>=0);
		}
}
