#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int five = N / 5, three, min = INT_MAX;
    for(int i = 0; i < five+1; i++) {
        three = (N - i*5) / 3;
        if (i*5 + three*3 == N && min > i + three) min = i + three;
    }
    printf("%d", min == INT_MAX ? -1 : min);
    return 0;
}