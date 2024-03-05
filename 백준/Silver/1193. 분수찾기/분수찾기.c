#include <stdio.h>
#include <stdlib.h>

int pyramid(int value) {
    int line = 1;
    while(value > line) {
        value -= line;
        line++;
    }
    return line;
}

int sigma(int value) {
    if (value == 1) return 1;
    if (value == 0) return 0;
    return value + sigma(value-1);
}

int main() {
    int index, py, pos, de, nu;
    scanf("%d", &index);
    py = pyramid(index);
    pos = index - sigma(py - 1);
    de = py % 2 == 0 ? pos : py - pos + 1;
    nu = py % 2 == 0 ? py - pos + 1 : pos;
    printf("%d/%d", de, nu);
    return 0;
}