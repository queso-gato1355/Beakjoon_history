#include <stdio.h>
int main() {
    int max=-1, position, input;
    for(int i = 0; i < 9; i++) {
        scanf("%d\n", &input);
        if(input > max) {
            max = input; position = i + 1;
        }
    }
    printf("%d\n%d", max, position);
    return 0;
}