#include <stdio.h>
#include <limits.h>

int main() {
    int marble=0, x, y, mx=INT_MAX, my=INT_MAX, Mx=INT_MIN, My=INT_MIN;
    scanf("%d", &marble);
    for(; marble > 0; marble--) {
        scanf("%d %d", &x, &y);
        mx = x < mx ? x : mx;
        my = y < my ? y : my;
        Mx = x > Mx ? x : Mx;
        My = y > My ? y : My;
    }
    printf("%d", (Mx - mx) * (My - my));
    return 0;
}