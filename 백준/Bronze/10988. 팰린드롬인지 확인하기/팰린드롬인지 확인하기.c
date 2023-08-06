#include <stdio.h>
#include <string.h>

int main() {
    char word[101] = {0, };
    scanf("%s", word);
    int result = 0;
    for(int i = 0; i < (strlen(word) > 1 ? strlen(word) / 2 : 1); i++) {
        if(word[i] != word[strlen(word) - 1 - i]) {
            result = 0;
            break;
        }
        result = 1;
    }
    printf("%d\n",result);
    return 0;
}