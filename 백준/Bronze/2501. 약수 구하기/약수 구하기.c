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

int main() {
    int N, i;
    scanf("%d %d", &N, &i);
    printf("%d", nth_factor(N, i));
    return 0;
}