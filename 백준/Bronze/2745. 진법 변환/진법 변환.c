#include <stdio.h>
#include <math.h>
#include <string.h>

int toBaseTen(char* str, int size, int base) {
    int result = 0;
    for(int i = 0; i < size; i++) {
        if (str[i] >= 65) 
            result += pow((double) base, (double) size - i - 1) * (str[i] - 55);
        else
            result += pow((double) base, (double) size - i - 1) * (str[i] - 48);
    }
    return result;
}

int main() {
    char str[32];
    int base = 0;
    scanf("%s %d", str, &base);
    printf("%d", toBaseTen(str, strlen(str), base));
    return 0;    
}