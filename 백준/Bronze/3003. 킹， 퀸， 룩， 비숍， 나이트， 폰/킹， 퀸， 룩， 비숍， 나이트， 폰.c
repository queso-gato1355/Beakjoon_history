#include <stdio.h>

int main() {
    int k = 0, q = 0, l = 0, b = 0, n = 0, p = 0;
    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
    printf("%d %d %d %d %d %d", 1 - k, 1 - q, 2 - l, 2 - b, 2 - n, 8 - p);
    return 0;
}