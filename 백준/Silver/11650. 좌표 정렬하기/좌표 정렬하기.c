#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} Point;

int comparePoints(Point A, Point B) {
    if (A.x > B.x) return 1;
    if (A.x == B.x && A.y > B.y) return 1;
    return 0;
}

void merge(Point *arr, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Point L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (comparePoints(R[j], L[i])) 
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];

    while (j < n2) arr[k++] = R[j++];
}

void merge_sort_helper(Point *arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        merge_sort_helper(arr, left, mid);
        merge_sort_helper(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void merge_sort(Point *arr, int arr_size) {
    merge_sort_helper(arr, 0, arr_size - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    Point *coordinates = (Point*) malloc(N * sizeof(Point));
    for(int i = 0; i < N; i++) 
        scanf("%d %d", &coordinates[i].x, &coordinates[i].y);

    merge_sort(coordinates, N);

    for(int i = 0; i < N; i++)
        printf("%d %d\n", coordinates[i].x, coordinates[i].y);

    free(coordinates);
    return 0;
}