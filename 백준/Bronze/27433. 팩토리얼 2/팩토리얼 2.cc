#include <iostream>
using namespace std;

long long f(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * f(n-1);
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