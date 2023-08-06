#include <stdio.h>
#include <string.h>

int main() {
    int l = 0, il = 0;
    scanf("%d", &l);
    char S[20] = {0, };
    for(int o = 0; o < l; o++){
        scanf("%d %s", &il, &S);
        for(int j = 0; j < strlen(S); j++) for(int i = 0; i < il; i++) printf("%c", S[j]);
        puts("");
    }
    return 0;
}