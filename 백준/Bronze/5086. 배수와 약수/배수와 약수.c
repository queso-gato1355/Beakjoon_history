#include <stdio.h>
#include <stdlib.h>

int main() {
    int f, s;
    while(1) {
        scanf("%d %d", &f, &s);
        if(f == s) break;
        printf("%s\n", s % f == 0 ? "factor" : (f % s == 0 ? "multiple" : "neither"));
    }
    return 0;
}