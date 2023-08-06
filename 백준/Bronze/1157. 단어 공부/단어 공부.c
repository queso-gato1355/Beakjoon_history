#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* word = (char*)malloc(1000000);
    int c = 0, count[26] = {0, }, max = -1, maxin = -1;
    scanf("%s", word);
    for(char* k = word; *k; k++) {
        c = *k < 91 ? *k - 65 : *k - 97;
        count[c] += 1;
    }
    for(int i = 0; i < 26; i++) if(count[i] > max) {max = count[i]; maxin = i;}
    for(int i = 0; i < 26; i++) if(count[i] == max && i != maxin) {puts("?"); return 0;}

    printf("%c\n", maxin + 65);
    
    return 0;
}