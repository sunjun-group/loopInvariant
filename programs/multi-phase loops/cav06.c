#include "assert.h"

void foo() {
	int x, y, flag;
	x = 0;
	y = 0;
	flag = 0;
	while (flag < 1) {
		if (x <= 50)
			y = y + 1;
		else
			y = y - 1;

		if (y < 0) {
			flag = 1;
		}
		if (flag < 1) {
			x = x + 1;
		}
	}

	asssert(x <= 102);
	assert(y <= 51);
}