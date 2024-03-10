#include <stdio.h>
#include <stdlib.h>

void merge(int* list, size_t size, int left, int mid, int right) {
    int i = left, j = mid+1, k = left;
    int* sorted = (int*)malloc(size * sizeof(int));

    while(i <= mid && j <= right) {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if(i > mid)
        for(int l = j; l <= right; l++)
            sorted[k++] = list[l];
    else
        for(int l = i; l <= mid; l++)
            sorted[k++] = list[l];

    for(int l = left; l <= right; l++)
        list[l] = sorted[l];

    free(sorted);
}

void merge_sort(int* list, size_t size, int left, int right) {
    int mid;

    if(left < right) {
        mid = (left + right) / 2;

        merge_sort(list, size, left, mid);
        merge_sort(list, size, mid+1, right);
        merge(list, size, left, mid, right);
    }
}
 
int main() {
    int N, i = 0;
    scanf("%d", &N);
    int* list = (int*)malloc((N+1) * sizeof(int));
    while(~scanf("%d", &list[i]) && i < N) i++;
    merge_sort(list, N, 0, N-1);
    for(i=0; i < N; i++) printf("%d\n", list[i]);
    free(list);
    return 0;
}