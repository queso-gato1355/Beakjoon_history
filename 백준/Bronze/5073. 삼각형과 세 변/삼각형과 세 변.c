#include <stdio.h>

int main() {
    int a, b, c, max;
    while(~scanf("%d%d%d", &a, &b, &c)) {
        if((a >= b && a >= c && a < b + c) ||
           (b >= a && b >= c && b < a + c) ||
           (c >= a && c >= b && c < b + a))
            printf(a==b&&b==c ? "Equilateral" : (a==b||b==c||a==c ? "Isosceles" : "Scalene"));
        else if (a+b+c != 0) printf("Invalid");
        else break;
        printf("\n");
    }
    return 0;
}