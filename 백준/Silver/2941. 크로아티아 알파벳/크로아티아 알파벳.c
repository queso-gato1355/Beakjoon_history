#include <stdio.h>
#include <stdlib.h>

int main() {
    char word[301] = {0,};
    scanf("%s", word);
    int count = 0;
    for(char* k = word; *k; k++) {
        if(*k == 'z' && *(k-1) != 0 && *(k-1) == 'd' && *(k+1) != 0 && *(k+1) == '=') continue;
        else if((*k == 'c' || *k == 'd' || *k == 's' || *k == 'z') && *(k+1) != 0 && (*(k+1) == '=' || *(k+1) == '-')) count++;
        else if((*k == 'l' || *k == 'n') && *(k+1) != 0 && *(k+1) == 'j') count++;
        else if(*k == 'd' && *(k+1) != 0 && *(k+2) != 0 && *(k+1) == 'z' && *(k+2) == '=') count++;
        else if(*k == 'j' && *(k-1) != 0 && (*(k-1) == 'l' || *(k-1) == 'n')) continue;
        else if(*k != '=' && *k != '-') count++;
    }
    printf("%d\n", count);
    return 0;
}