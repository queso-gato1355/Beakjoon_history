#include <stdio.h>

int gcd(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b, c, d, e, f, x, y, y_lcm;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    // ax + by = c
    // dx + ey = f
    if (!b || !e) {
        x = !b ? c / a : f / d;
        y = !b ? (f - d*x) / e : (c - a*x) / b;
    } else {
        y_lcm = lcm(b, e);
        a *= (y_lcm / b); c *= (y_lcm / b);
        d *= (y_lcm / e); f *= (y_lcm / e);
        if (!(a^c^d^f)) {
            for(int i = -999; i < 1000; i++)
                for(int j = -999; j < 1000; j++)
                    if (a*i + y_lcm*j == c) {x = i; y = j;}
        } else {
            x = (c - f) / (a - d);
            y = (c - a * x) / y_lcm;
        }
    }
    printf("%d %d", x, y);
    return 0;
}