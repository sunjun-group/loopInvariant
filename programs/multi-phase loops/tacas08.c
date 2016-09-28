// TODO: define invariant manually
#include "assert.h"

int __BLAST_NONDET;

int main() {
  int x, y, w, z;
  int arandom, brandom, crandom;
  x = 0;
  y = 0;
  w = 0;
  z = 0;

  while (__BLAST_NONDET) {
    if (__BLAST_NONDET) {
      x = x + 1;
      y = y + 100;
	  }
    else {
      if (__BLAST_NONDET) {
        if ( x >= 4){
          x = x + 1;
          y = y + 1;
        }
      }
      else {
        if (y > 10*w && z >= 100*x) {
          y = -y;
        }
      }
	  }
    w = w + 1;
    z = z + 10;
  }
  if (x >= 4)
    assert(y > 2);

  return 0;
}