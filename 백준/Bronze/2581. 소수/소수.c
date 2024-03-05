#include <stdio.h>
#include <stdlib.h>

int count_factor(int value) {
    int count = 0;
    for(int i = 1; i * i <= value; i++) {
        if (i * i == value) count++;
        else if (value % i == 0) count += 2;
    }
    return count;
}

int is_prime(int value) {
    return count_factor(value) == 2 ? 1 : 0;
}

int main() {
    int min, max, sum = 0, m_p = 0;
    scanf("%d\n%d", &min, &max);
    for (int i = min; i <= max; i++) {
        if (is_prime(i)) {
            if (m_p == 0) m_p = i;
            sum += i;
        }
    }
    if (sum == 0) printf("-1");
    else printf("%d\n%d", sum, m_p);
    return 0;
}