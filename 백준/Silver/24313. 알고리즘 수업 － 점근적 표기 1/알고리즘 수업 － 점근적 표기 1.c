#include <stdio.h>

int main() {
    int a1, a0, c, n0;
    scanf("%d %d\n%d\n%d",&a1,&a0,&c,&n0);
    printf((a1 * n0 + a0 <= c * n0 && a1 <= c) ? "1\n" : "0\n");
    return 0;
}