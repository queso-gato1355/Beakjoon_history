#include <stdio.h>

int main() {
    int count[10] = {0, }, N;
    char string[11] = {0, };
    scanf("%s", &string);
    for(N=0; N<11; N++) count[string[N] - '0']++;
    for(N=9; N>=0; N--)
        for(int i = 0; i < count[N]; i++)   
            printf("%d", N);
    return 0;
}