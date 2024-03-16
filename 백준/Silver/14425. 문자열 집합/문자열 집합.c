#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long hashing(char *str) {
    unsigned long long sum = 0;
	while (*str) {
		sum = sum*65599 + *str;
		str++;
	}
	return sum;
}

int binarySearch(unsigned long long* list, size_t size, unsigned long long goal) {
    int mid, left = 0, right = size - 1;
    while(left <= right) {
        mid = (left + right) / 2;
        if (list[mid] == goal) return mid;
        else if (list[mid] < goal) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int compare(const void* a, const void* b) {
    const unsigned long long* num1 = (const unsigned long long*)a;
    const unsigned long long* num2 = (const unsigned long long*)b;

    if (*num1 < *num2)
        return -1;
    else if (*num1 > *num2)
        return 1;
    else
        return 0;
}

int main() {
    int F, S, count = 0;
    char string[501];
    scanf("%d %d", &F, &S);
    unsigned long long* list = (unsigned long long *)malloc(F * sizeof(unsigned long long));
    for(int i = 0; i < F; i++) {
        scanf("%s", string);
        list[i] = hashing(string);
    }
    qsort(list, F, sizeof(unsigned long long), compare);
    for(int i = 0; i < S; i++) {
        scanf("%s", string);
        unsigned long long hashValue = hashing(string);
        if (binarySearch(list, F, hashValue) != -1) {count++;}
    }
    printf("%d", count);
    free(list);
    return 0;
}