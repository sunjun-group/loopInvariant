// jm2006_variant_true-unreach-call.c
int main() {
    int i;
    int j;
    europa_make_symbolic(&i, sizeof(i), "i");
    europa_make_symbolic(&j, sizeof(j), "j");
    
    europa_assume(0 <= i && i < 1000000);
    europa_assume(j >= 0);

    int x = i;
    int y = j;
    int z = 0;
    europa_make_symbolic(&x, sizeof(x), "x");
    europa_make_symbolic(&y, sizeof(y), "y");
    europa_make_symbolic(&z, sizeof(z), "z");
    
    europa_invariant(x + z == i && j - y == 2 * z);
    while (x != 0) {
    	x--;
    	y -= 2;
    	z++;
    }

    if (i == j) {
    	europa_assert(y == -z);
    }
    
    return 0;
}
