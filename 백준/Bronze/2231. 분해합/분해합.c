#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int countDigits(long number) {
    int count = 0, n = number;
    while(n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

int isConstructor(long subject, long goal) {
    int subjectSize = countDigits(subject);
    long sumation = subject;
    char* digits = (char *)malloc(subjectSize);
    if(digits == NULL) return -1;
    sprintf(digits,"%d",subject);

    for(int i = 0; i < subjectSize; i++)
        sumation += digits[i] - '0';

    free(digits);
    return sumation == goal ? 1 : 0;
}

int main() {
    long number, min = LONG_MAX;
    scanf("%ld", &number);
    for(long i = number; i > 0; i--)
        if (isConstructor(i, number))
            if (min > i) min = i;
    printf("%ld", min==LONG_MAX?0:min);
    return 0;
}