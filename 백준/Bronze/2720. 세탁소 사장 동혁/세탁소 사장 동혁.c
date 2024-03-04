#include <stdio.h>
#include <stdlib.h>

int main() {
    int trial, change, qu, di, ni;
    scanf("%d", &trial);
    for(; trial-- > 0;){
        scanf("%d", &change);
        qu = change / 25; change %= 25;
        di = change / 10; change %= 10;
        ni = change / 5;  change %= 5;
        printf("%d %d %d %d\n", qu, di, ni, change);
    }
    return 0;
}
