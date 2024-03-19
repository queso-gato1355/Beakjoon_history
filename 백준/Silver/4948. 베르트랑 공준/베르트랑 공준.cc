#include <iostream>
#include <cmath>

#define MAX_LENGTH 246913

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool seive[MAX_LENGTH + 1];
    fill_n(seive, MAX_LENGTH, true);
    for(int i = 2; i < sqrt(MAX_LENGTH) + 1; i++) {
        if (seive[i]) {
            int j = 2;
            while(i * j <= MAX_LENGTH) {
                seive[i * j] = false;
                j++;
            }
        }
    }

    int N, count;
    while(true) {
        count = 0;
        cin >> N;
        if (N == 0) break;
        for(int i = N+1; i < 2*N + 1; i++) {
            if (seive[i]) count++;
        }
        cout << count << '\n';
    }
    
    return 0;
}