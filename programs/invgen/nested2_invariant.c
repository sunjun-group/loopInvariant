
void main() {
  int i,k,n,l;

  tmpl("(le(n,i,k,l),le(n,i,k,l))");

  assume(l>0);

  // invariant (1 <= k && k <= n)
  for (k=1;k<n;k++){
    //assert(k<=n);
    //assert(1<=k)assert(1<=j);;
    for (i=l;i<n;i++) {
      //assert(1<=i);
      //assert(i<=n);
    }
    for (i=l;i<n;i++) {
      assert(1<=k);
    }
  }

 }