nt main() {
    int i;
    int j;
    europa_make_symbolic(&i, sizeof(i), "i");
    europa_make_symbolic(&j, sizeof(j), "j");

    europa_assume(i >= 0 && j >= 0);

    int x = i;
    int y = j;
    europa_make_symbolic(&x, sizeof(x), "x");
    europa_make_symbolic(&y, sizeof(y), "y");
    
    europa_invariant(j - i == y - x);
    while (x != 0) {
    	x--;
    	y--;
    }

    if (i == j) {
    	europa_assert(y == 0);
    }
    
    return 0;
}
