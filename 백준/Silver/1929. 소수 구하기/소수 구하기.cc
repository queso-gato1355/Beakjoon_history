#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned long long value) {
    if (value <= 1) return false;
    if (value <= 3) return true;
    if (value % 2 == 0 || value % 3 == 0) return false;
    for (long i = 5; i < sqrt(value) + 1; i++)
        if (value % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int F, S;
    unsigned long long buffer;
    cin >> F >> S;

    for(int i = F; i < S + 1; i++)
        if (isPrime(i)) cout << i << '\n';
    
    return 0;
}