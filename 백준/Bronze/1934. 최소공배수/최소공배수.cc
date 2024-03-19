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

    int N, A, B;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        cout << lcm(A, B) << '\n';
    }

    return 0;
}