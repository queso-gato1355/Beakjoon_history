#include <stdio.h>

int isApocalypseNumber(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 6) {
            count++;
            if (count >= 3) return 1;
        } else 
            count = 0;
        num /= 10; // 다음 자리로 이동
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 666;

    while (1) {
        if (isApocalypseNumber(num)) count++;
        if (count == N) {
            printf("%d\n", num);
            break;
        }
        num++;
    }

    return 0;
}