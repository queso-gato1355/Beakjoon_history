#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int key;
    int age;
    char name[101];
} Person;

int static compare(const void* first, const void* second) {
    Person f = *(Person*) first;
    Person s = *(Person*) second;

    if (f.age > s.age) return 1;
    else if (f.age < s.age) return -1;
    if (f.key > s.key) return 1;
    else if (f.key < s.key) return -1;
    else return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    Person* list = (Person*)malloc(N * sizeof(Person));

    for(int i = 0; i < N; i++) {
        scanf("%d %s", &list[i].age, list[i].name);
        list[i].key = i;
    }
    qsort(list, N, sizeof(Person), compare);

    for(int i = 0; i < N; i++) 
        printf("%d %s\n", list[i].age, list[i].name);

    free(list);
    return 0;
}