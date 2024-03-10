#include <stdio.h>

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

int sum(int* list, size_t size) {
    int result = 0;
    for(int i = 0; i < size; i++)
        result += list[i];
    return result;
}
 
int main() {
    int list[5], i = 0;
    while(~scanf("%d", &list[i]) && i < 5) i++;
    printf("%d\n%d", sum(list, 5)/5, insertionSort(list, 5)[2]);
    return 0;
}