#include <stdio.h>
#include <string.h>

int main() {
    char S[100] = {0, };
    int pos[26] = {0, }, index = 0, k = 0;
    memset(pos, -1, 26*4);
    scanf("%s", &S);
    while(1) {
        if(S[index] == 0) break;
        k = S[index] - 97;
        if(pos[k] == -1) pos[k] = index;
        index++;
    }
    for(int i = 0; i < 26; i++) printf("%d ", pos[i]);
    return 0;
}