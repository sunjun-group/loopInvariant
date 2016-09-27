#include "assert.h"

void foo() {
	int x, y;
	x = 0;
	y = 50;
	// invariant ( (x <= 50 && y == 50) || (x > 50 && x <= 100 && x == y) )
	while(x < 100) {
		x = x + 1;
		if (x > 50) {
			y = y + 1;
		}
	}
	assert(y == 100);
}