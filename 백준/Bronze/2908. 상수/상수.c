#include <stdio.h>

int main() {
    char numbers[2][3];
    int num[2];
    scanf("%s %s", &numbers[0], &numbers[1]);
    num[0] = (numbers[0][2]-48) * 100 + (numbers[0][1]-48) * 10 + (numbers[0][0]-48);
    num[1] = (numbers[1][2]-48) * 100 + (numbers[1][1]-48) * 10 + (numbers[1][0]-48);
    printf("%d\n",num[0] > num[1] ? num[0] : num[1]);
    return 0;
}