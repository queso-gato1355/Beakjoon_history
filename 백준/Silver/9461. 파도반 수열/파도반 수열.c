#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    unsigned long long padoban[MAX_LENGTH] = {1, 1, 1,};
    unsigned long long* foot = padoban;
    for (int i = 0; i < MAX_LENGTH - 3; i++) {
        *(padoban + i + 3) = *foot + *(foot+1);
        foot++;
    }
    int trial = 0;
    scanf("%d", &trial);
    for (int i = 0; i < trial; i++) {
        int temp = 0;
        scanf("%d", &temp);
        printf("%llu\n", padoban[temp - 1]);
    }
    return 0;
}