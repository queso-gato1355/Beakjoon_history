#include <stdio.h>
int main(int t) {
    unsigned long long p[100] = {1, 1, 1}, *f = p;
    for (; f++ < p + 97;) *(f + 2) = *(f - 1) + *f;
    for (scanf("%d", &t); ~scanf("%d", &t); printf("%llu\n", p[--t]));
}