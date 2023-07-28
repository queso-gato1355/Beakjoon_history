#include <stdio.h>

int main() {
    int element = 0, subject[1000] = {0,}, max = -1;
    float sum = 0.0;
    scanf("%d", &element);
    for(int i = 0; i < element; i++) {
        scanf("%d", &subject[i]);
        if(subject[i] > max) max = subject[i];
    }
    for(int i = 0; i < element; i++) sum += ((float) subject[i] / (float) max) * 100.0;
    printf("%f", sum / (float) element);
    return 0;
}