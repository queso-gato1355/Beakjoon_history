#include <stdio.h>

int main() {
    int count[10001] = {0, }, N;
    scanf("%d", &N);
    while(~scanf("%d", &N)) count[N]++;
    for(N=0; N<10001; N++)
        for(int i = 0; i < count[N]; i++)   
            printf("%d\n", N);
    return 0;
}