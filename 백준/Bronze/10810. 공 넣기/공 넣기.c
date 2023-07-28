#include <stdio.h>
int main() {
    int bucket = 0, trial = 0;
    int from = 0, to = 0, label = 0;
    scanf("%d %d", &bucket, &trial);
    int buckets[100]={0,};
    while(trial--){
        scanf("%d %d %d", &from, &to, &label);
        for(int start = from-1; start < to; start++) buckets[start] = label;
    }
    for(int i = 0; i < bucket; i++) printf("%d ", buckets[i]);
    return 0;
}