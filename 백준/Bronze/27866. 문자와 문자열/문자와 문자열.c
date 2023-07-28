#include <stdio.h>

int main() {

    char S[1000] = "";
    int index = 0;

    scanf("%s", &S);
    scanf("%d", &index);

    printf("%c\n", S[index-1]);

    return 0;
}