#include <stdio.h>

int main() {
    int k = 0;
    scanf("%d", &k);
    for(int i = 0; i < 2*k-1; i++) {
        for(int j = 0; j < (i < k ? 1 : -1)*(k - i - 1); j++) printf(" ");
        for(int j = 0; j < (i < k ? 2*i + 1 : 4*k - 3 - 2*i); j++) printf("*");
        puts("");
    }
    return 0;
}