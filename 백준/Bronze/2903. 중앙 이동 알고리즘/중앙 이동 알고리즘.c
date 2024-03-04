#include <stdio.h>
#include <stdlib.h>

int internal_algorithm(int value) {
    if (value == 0) return 2;
    return 2 * internal_algorithm(value - 1) - 1;
}

int main() {
    int trial;
    scanf("%d", &trial);
    printf("%d", internal_algorithm(trial) * internal_algorithm(trial));
    return 0;
}