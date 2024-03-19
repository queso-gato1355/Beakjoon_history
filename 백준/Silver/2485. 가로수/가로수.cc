#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, current, prev;
    cin >> N;
    vector<int> s(N);
    vector<int> distance(N-1);
    for(int i = 0; i < N; i++) {
        cin >> s[i];
        if(i != 0) distance[i-1] = s[i] - s[i-1];
    }
    current = distance[0];
    for(int i = 1; i < N - 1; i++)
        current = __gcd(current, distance[i]); // 최대 최소만 하면 안 됐었다!

    cout << ((s[N-1] - s[0]) / current) + 1 - N << '\n';
    
    return 0;
}