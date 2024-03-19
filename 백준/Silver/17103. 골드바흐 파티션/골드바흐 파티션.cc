#include <iostream>
#include <cmath>

#define MAX_LENGTH 1000000

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

    int N, buffer, count;
    cin >> N;
    for (int i = 0; i < N; i++) {
        count = 0;
        cin >> buffer;
        for (int j = 2; j < buffer / 2 + 1; j++)
            if (seive[j] && seive[buffer - j]) count++;
        cout << count << '\n';
    }
    
    return 0;
}