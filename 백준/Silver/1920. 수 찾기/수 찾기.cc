#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, buffer;
    cin >> N;
    set<int> base;
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        base.insert(buffer);
    }
    cin >> M;
    vector<int> com(M);
    for(int i = 0; i < M; i++)
        cin >> com[i];

    for(int atom: com) {
        if(base.find(atom) != base.end()) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}