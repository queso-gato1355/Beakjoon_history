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

unsigned long long ceilingPrime(unsigned long long value) {
    if (isPrime(value)) return value;
    if (value <= 1) return 2;
    while(!isPrime(value++));
    return --value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    unsigned long long buffer;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> buffer;
        buffer = ceilingPrime(buffer);
        cout << buffer << '\n';
    }
    
    return 0;
}