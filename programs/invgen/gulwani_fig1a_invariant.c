#include "assert.h"

int __BLAST_NONDET;
void main() {
  int x, y;

  x = -50;
  // invariant (x < 0 || y > 0)
  while( x < 0 ) {
	x = x + y;
	y++;
  }
  assert(y > 0);
}
