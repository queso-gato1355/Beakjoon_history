#include <stdio.h>
int main() {
    int check[30] = {0,}, student;
    for(int i = 0; i < 28; i++) {
        scanf("%d", &student);
        check[student-1] = 1;
    }
    for(int i = 0; i<30; i++) if(check[i]==0) printf("%d\n", i+1);
    return 0;
}