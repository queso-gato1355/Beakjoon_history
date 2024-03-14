#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* first, const void* second) {
    return *(long *) first - *(long *) second;
}

int binarySearch(long* list, size_t size, long goal) {
    int left = 0, right = size - 1, mid;

    while(left <= right) {
        mid = (left + right) / 2;
        if(list[mid] == goal) return mid;
        else if(list[mid] > goal) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

// 중복된 숫자를 제거하고 새로운 배열의 크기를 반환
size_t removeDuplicates(long* list, size_t size) {
    size_t uniqueCount = 1;
    for (size_t i = 1; i < size; i++)
        if (list[i] != list[uniqueCount - 1])
            list[uniqueCount++] = list[i];
    return uniqueCount;
}

// 탐색 알고리즘의 시간 복잡도를 줄여야 한다.
int indexOf(long* list, size_t size, long goal) {
    return binarySearch(list, size, goal);
}

int main() {
    int N;
    scanf("%d", &N);
    long* list = (long*)malloc(N * sizeof(long));
    long* copiedList = (long*)malloc(N * sizeof(long)); 
    for(int i = 0; i < N; i++) {
        scanf("%ld", &list[i]);
        copiedList[i] = list[i];
    }
    qsort(list, N, sizeof(long), compare);
    size_t uniqueCount = removeDuplicates(list, N);
    for(int i = 0; i < N; i++)
        printf("%d ", indexOf(list, uniqueCount, copiedList[i]));
    free(list);
    free(copiedList);
    return 0;
}