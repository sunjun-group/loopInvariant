//terminator_03_true-unreach-call_true-termination.c
int main() {
	int x;
	int y;
	europa_make_symbolic(&x, sizeof(x), "x");
	europa_make_symbolic(&y, sizeof(y), "y");
	europa_assume( y <= 1000000);

	if (y > 0) {
		europa_invariant(x >= 100 || x < 100 + y);
		while (x < 100) {
			x = x + y;
		}
	}
	

	europa_assert(y <= 0 || (y > 0 && x >= 100));

	return 0;
}
