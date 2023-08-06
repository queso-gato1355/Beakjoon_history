#include <stdio.h>

int main() {
    int l = 0, s = 0;
    scanf("%d", &l);
    unsigned char k[l];
    scanf("%s", &k);
    for(int i = 0;i < l;i++) s += (k[i] - 48);
    printf("%d\n",s);
    return 0;
}