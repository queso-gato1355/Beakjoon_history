#include <stdio.h>

// fibonacci dynamic programming
int f(int n) {
    int a = 1, b = 2, c;
    if (n == 1) return a;
    if (n == 2) return b;
    for (int i = 3; i <= n; i++) {
        c = (a + b) % 15746;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n; // 1 <= n <= 1000000
    scanf("%d", &n);
    printf("%d", f(n) % 15746);
    return 0;
}