#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> cardset; // map은 RB 트리다
    int N, M, num;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> num;
        if (cardset.count(num) == 0)
            cardset[num] = 1;
        else {
            cardset[num]++;
        }
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> num;
        if (cardset.count(num))
            cout << cardset[num] << ' ';
        else
            cout << 0 << ' ';
    }

    return 0;
}