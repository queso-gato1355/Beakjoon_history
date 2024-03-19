#include <iostream>
#include <algorithm>

using namespace std;

long long int lcm(long long int a, long long int b) {
    long long int c = __gcd(a, b);
    return (a / c) * c * (b / c);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int A, B;
    cin >> A >> B;
    cout << lcm(A, B);

    return 0;
}