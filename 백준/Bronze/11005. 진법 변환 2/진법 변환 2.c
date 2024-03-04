#include <stdio.h>
#include <stdlib.h>

int main() {
    int original, base, digit, remain;
    char result[32] = {0, };
    scanf("%d %d", &original, &base);
    if(original==0) {
        printf("0");
        return 0;
    }
    digit = 0;
    while(original != 0 && digit < 32) {
        remain = original % base;
        result[digit++] = (remain < 10) ? (remain + '0') : (remain + 'A' - 10);
        original /= base;
    }
    while(digit) printf("%c", result[--digit]);
    return 0;
}
