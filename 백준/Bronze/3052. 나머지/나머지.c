#include <stdio.h>
int main() {
    int remain[42] = {0,}, input = 0, count = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remain[input%42] = remain[input%42] + 1;
    }
    for(int i = 0; i < 42; i++) if(remain[i] > 0) count++;
    printf("%d", count);
    return 0;
}