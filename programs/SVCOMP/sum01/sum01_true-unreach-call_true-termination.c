// sum01_true-unreach-call_true-termination.c
int main() {
    int n;
    europa_make_symbolic(&n, sizeof(n), "n");
    int i=0;
    int sn=0;
    
    europa_assume(0 <= n && n < 1000);
    europa_make_symbolic(&i, sizeof(i), "i");
    europa_make_symbolic(&sn, sizeof(sn), "sn");
    
    europa_invariant(i <= n+1 && sn == 2 * (i-1));
    for (i = 1; i <= n; i++) {
        sn = sn + (2);
    }
    
    europa_assert(sn == n * (2) || sn == 0);
    
    return 0;
}
