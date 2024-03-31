#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr;
vector<bool> visited;

void dfs(int N, int M, int idx, int before) {
    // base case
    if (idx == M) {
        for(int k: arr)
            cout << k << " ";
        cout << '\n';
        return;
    }

    for(int i = 0; i < N; i++) {
        if(i+1 >= before) {
            arr[idx] = i+1;
            dfs(N, M, idx + 1, i+1);
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        visited.push_back(false);
    }
    for(int i = 1; i <= M; i++) {
        arr.push_back(0);
    }
    dfs(N, M, 0, 0);

    return 0;
}