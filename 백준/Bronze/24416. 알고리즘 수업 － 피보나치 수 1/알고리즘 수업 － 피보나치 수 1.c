#include <stdio.h>

int counter1, counter2;

int fibonacciRecursive(int n) {
    if (n <= 2) {
        counter1++;
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int fibonacciDynamic(int n) {
    int fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= n; i++) {
        counter2++;
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

int main() {
    counter1 = 0; counter2 = 0;
    int n;
    scanf("%d", &n);
    fibonacciRecursive(n);
    fibonacciDynamic(n);
    printf("%d %d", counter1, counter2);
    return 0;
}