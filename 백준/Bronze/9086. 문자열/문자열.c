#include <stdio.h>
#include <string.h>

int main() {
    int count = 0;
    int length = 0;
    scanf("%d", &count);
    char string[100] = "";
    char result[count][2];

    for(int i = 0; i < count; i++) {
        scanf("%s", &string);
        length = strlen(string);
        result[i][0] = string[0];
        result[i][1] = string[length - 1];
    }
    
    for(int i = 0; i < count; i++) {
        printf("%c", result[i][0]);
        printf("%c\n", result[i][1]);
    }

    return 0;
}