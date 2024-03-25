#include <iostream>
using namespace std;

int factorial(int N) {
    int result = 1;
    while (N > 0) result *= N--;
    return result;
}

int numCombi(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, R;
    cin >> N >> R;
    cout << numCombi(N, R) << '\n';

    return 0;
}