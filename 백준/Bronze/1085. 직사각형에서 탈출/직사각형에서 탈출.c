#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, w, h, u, r;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    u = h-y < y ? h - y : y;
    r = w-x < x ? w - x : x;
    printf("%d", u < r ? u : r);
    return 0;
}