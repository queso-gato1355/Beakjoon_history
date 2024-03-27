#include <iostream>
using namespace std;

long long f(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return f(n-1) + f(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    cout << f(N);

    return 0;
}