#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c = 0, prev = 0;
    int count = 0, l = 0;
    char* string;
    string = (char*)malloc(1000000);
    memset(string, 0, 1000000);
    gets(string);
    while(1) {
        c = string[l];
        if(c == 10 || c == 0 || c == 13) {
            if(prev == 32) count--;
            break;
        }
        if(c == 32 && l != 0) count++;
        l++; prev = c;
    }
    printf("%d\n", ++count);
    free(string);
    return 0;
}