#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * "nested5.c" from InvGen test suite
 */

void main() {
  int i,j,k,n;
  
  // invariant (0 <= i && i <= n)
  for (i=0;i<n;i++)
  	// invariant (i <= j && j <= n)
    for (j=i;j<n;j++)
      // invariant (j <= k && k <= n)
      for (k=j;k<n;k++)
	    static_assert(k>=i);
}
