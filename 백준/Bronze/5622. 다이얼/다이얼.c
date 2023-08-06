#include <stdio.h>
#include <string.h>

int main() {
    char S[16] = {0, };
    int pos[26] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8}, time = 0;
    scanf("%s", S);
    for(int i = 0; i < strlen(S); i++) {
        //printf("Character : %c, Corresponding Number : %d\n", S[i], pos[S[i]-65] + 1);
        time += 2 + pos[S[i] - 65];
    }
    printf("%d\n", time);
    
    return 0;
}