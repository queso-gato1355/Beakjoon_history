#include <stdio.h>
#include <stdlib.h>

int* insertionSort(int* list, size_t size) {
    for(int i = 1; i < size; i++) {
        int key = list[i];
        int j = i - 1;
        while(j >= 0 && list[j] > key) {
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = key;
    }
    return list;
}

int main() {
    int N;
    scanf("%d", &N);
    int* list = (int *)malloc((N+1) * sizeof(int));
    for(int i = 0; i < N; i++)
        scanf("%d", &list[i]);
    int* sorted = insertionSort(list, N);
    for (int i = 0; i < N; i++)
        printf("%d\n", sorted[i]);
    free(list);
    return 0;
}