#include <stdio.h>
#include <stdlib.h>

int* insertionSort(int* list, size_t size) {
    for(int i = 1; i < size; i++) {
        int key = list[i];
        int j = i - 1;
        while(j >= 0 && list[j] < key) {
            list[j+1] = list[j];
            j--;
        }
        list[j+1] = key;
    }
    return list;
}
 
int main() {
    int participant, cutline;
    scanf("%d %d", &participant, &cutline);
    int* list = (int *)malloc((participant + 1) * sizeof(int));
    for(int i = 0; i < participant; i++)
        scanf("%d", &list[i]);
    insertionSort(list, participant);
    printf("%d", list[cutline-1]);
    free(list);
    return 0;
}