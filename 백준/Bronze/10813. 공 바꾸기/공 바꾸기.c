#include <stdio.h>
int main() {
    int buckets[100], bucket, trial, first, second, buffer;
    for(int i = 0; i<100; i++) buckets[i] = i+1;
    scanf("%d %d", &bucket, &trial);
    for(int i = 0; i<trial; i++) {
        scanf("%d %d", &first, &second);
        buffer = buckets[first-1];
        buckets[first-1] = buckets[second-1];
        buckets[second-1] = buffer;
    }
    for(int i = 0; i<bucket; i++) printf("%d ", buckets[i]);
    return 0;
}