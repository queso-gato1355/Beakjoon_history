#include <stdio.h>
#include <stdlib.h>

int nth_factor(int value, int index) {
    int i = 1;
    for(; i <= value; i++) {
        if(value % i == 0) index--;
        if(index==0) break;
    }
    if(index != 0) return 0;
    return i;
}

int count_factor(int value) {
    int count = 0;
    for(int i = 1; i * i <= value; i++) {
        if (i * i == value) count++;
        else if (value % i == 0) count += 2;
    }
    return count;
}

int is_prime(int value) {
    return count_factor(value) == 2 ? 1 : 0;
}

int main() {
    int number;
    scanf("%d", &number);
    if (number == 1) return 0;
    while(!is_prime(number)) {
        int smallest = nth_factor(number, 2);
        printf("%d\n", smallest);
        number /= smallest;
    }
    printf("%d", number);

    return 0;
}