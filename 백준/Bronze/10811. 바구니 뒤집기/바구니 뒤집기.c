#include <stdio.h>
int main() {
    int length = 0, repeat = 0, start = 0, end = 0;
    scanf("%d %d", &length, &repeat);
    int rise[100] = {0, }, fall[100] = {0, };
    for(int i = 0; i < length; i++) rise[i] = i + 1;
    for(int i = length; i > 0; i--) fall[i] = 0;
    for(int i = 0; i < repeat; i++) {
        scanf("%d %d", &start, &end);
        for(int i = start - 1; i < end; i++) fall[i] = rise[i];
        for(int i = 0; i < end - start + 1; i++) rise[i + start - 1] = fall[end - 1 - i];
    }
    for(int i = 0; i < length; i++) printf("%d ", rise[i]);
    return 0;
}