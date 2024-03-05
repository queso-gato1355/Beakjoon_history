#include <stdio.h>
#include <stdlib.h>

int count_factor(int value) {
    int count = 0;
    for(int i = 1; i * i <= value; i++) {
        if (i * i == value) count++;
        else if (value % i == 0) count += 2;
    }
    return count;
}

int main() {
    int repeat, number, count = 0;
    scanf("%d", &repeat);
    while(repeat-- > 0) {
        scanf("%d", &number);
        if(count_factor(number) == 2) count++;
    }
    printf("%d", count);
    return 0;
}