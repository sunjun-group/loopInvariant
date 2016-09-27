// hhk2008_true-unreach-call.c
int main() {
    int a;
    int b;
    europa_make_symbolic(&a, sizeof(a), "a");
    europa_make_symbolic(&b, sizeof(b), "b");
    
    int res, cnt;
    europa_assume(a < 1000000);
    europa_assume(0 <= b && b <= 1000000);

    res = a;
    cnt = b;
    europa_make_symbolic(&res, sizeof(res), "res");
    europa_make_symbolic(&cnt, sizeof(cnt), "cnt");
    
    europa_invariant(cnt >= 0 && res + cnt == a + b);
    while (cnt > 0) {
    	cnt = cnt - 1;
        res = res + 1;
    }

    europa_assert(res == a + b);
    
    return 0;
}
