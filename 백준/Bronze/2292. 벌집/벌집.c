#include <stdio.h>
#include <stdlib.h>

int series(int value) {
    if (value == 0) return -1;
    if (value == 1) return 2;
    return 6*(value - 1) + series(value - 1);
}

int main() {
    int trial;
    int way = 0;
    scanf("%d", &trial);
    while(trial > 1) {
        if (trial < series(++way + 1)) break;
    }
    printf("%d", way + 1);
    return 0;
}