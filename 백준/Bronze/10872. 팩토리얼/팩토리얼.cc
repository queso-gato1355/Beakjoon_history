#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, result = 1;
    cin >> N;
    while(N > 0)
        result *= N--;
    cout << result << '\n';

    return 0;
}