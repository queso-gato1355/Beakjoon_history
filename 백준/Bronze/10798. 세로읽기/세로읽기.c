#include <stdio.h>

int main() {
    char strings[5][15] = {0, };

    for(int i = 0; i < 5; i++) scanf("%s", strings[i]);

    for(int i = 0; i < 15; i++)
        for(int j = 0; j < 5; j++)
            if(strings[j][i] != 0)
                printf("%c", strings[j][i]);

}