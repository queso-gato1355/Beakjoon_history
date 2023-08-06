#include <stdio.h>
#include <string.h>

int main() {
    int l = 0; char word[101] = {0, };
    int alpha[26][2] = {{0,} }, count = 0;
    scanf("%d", &l);
    while(l-- > 0) {
        memset(alpha, 0, 52*4);
        scanf("%s", word);
        for(int i = 0; i < strlen(word); i++) {
            if(alpha[word[i] - 97][1] != 0 && i - alpha[word[i] - 97][0] != 1) break;
            if(i == strlen(word) - 1) count++;
            alpha[word[i] - 97][0] = i;
            alpha[word[i] - 97][1] ++;
        }
    }
    printf("%d\n", count);
    return 0;
}