#include "assert.h"

int main(void) {
  int A[2048];
  int i;

  // invariant (forall i: 0 <= i && i < 1024 => A[i] == i)
  for (i = 0; i < 1024; i++) {
    A[i] = i;
  }

  __VERIFIER_assert(A[1023] == 1023);
}