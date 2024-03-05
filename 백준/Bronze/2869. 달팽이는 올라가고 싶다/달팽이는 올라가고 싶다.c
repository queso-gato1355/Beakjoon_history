#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A, B, V, trial;
    scanf("%d %d %d", &A, &B, &V);
    trial = ceil((double)(V - A) / (A - B)) + 1;
    printf("%d", trial);
    return 0;
}