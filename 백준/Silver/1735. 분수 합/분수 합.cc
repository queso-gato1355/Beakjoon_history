#include <iostream>
#include <algorithm>

using namespace std;

int lcm(int a, int b) {
    int c = __gcd(a, b);
    return (a / c) * c * (b / c);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nu1, deo1, nu2, deo2;
    cin >> nu1 >> deo1;
    cin >> nu2 >> deo2;
    int codeo = lcm(deo1, deo2);
    nu1 *= codeo / deo1;
    nu2 *= codeo / deo2;
    int conu  = nu1 + nu2;
    int comul = __gcd(codeo, conu);
    cout << conu / comul << " " << codeo / comul <<'\n';
    
    return 0;
}