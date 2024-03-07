#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }
int max3(int a, int b, int c) { return max(a, max(b, c)); }

int check_three_edge(int a, int b, int c) { 
    return max3(a, b, c) < a + b + c - max3(a, b, c) ? 1 : 0;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(check_three_edge(a, b, c)) printf("%d", a+b+c);
    else
        printf("%d", 2 * (a + b + c - max3(a, b, c)) - 1);
    return 0;
}