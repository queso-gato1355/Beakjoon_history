#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* first, const void* second) {
    return *(int *) first - *(int *) second;
}

int binarySearch(int* list, size_t size, int goal) {
    int left = 0, right = size - 1, mid;

    while(left <= right) {
        mid = (left + right) / 2;
        if(list[mid] == goal) return mid;
        else if(list[mid] > goal) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int indexOf(int* list, size_t size, int goal) {
    return binarySearch(list, size, goal);
}

int main() {
    int N, M, k = 0, n, i;
    scanf("%d", &N);
    int* list = (int *)malloc(N * sizeof(int));
    for(i = 0; i < N; i++)
        scanf("%d", &list[i]);
    qsort(list, N, sizeof(int), compare);
    scanf("%d", &M);
    char* count = (char *)malloc(M * sizeof(char));
    while(k++ < M) {
        scanf("%d", &n);
        i = indexOf(list, N, n);
        count[k - 1] = i != -1 ? 1 : 0;
    }
    for(i = 0; i < M; i++)
        printf("%d ", count[i]);
    return 0;
}