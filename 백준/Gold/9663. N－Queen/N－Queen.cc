#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> arr;
int possible = 0;

bool condition(int index) {
    for(int i = 0; i < index; i++) 
        if (arr[index] == arr[i] || index - i == abs(arr[index] - arr[i])) return false;
    return true;
}

void dfs(int N, int row) {
    // base case
    if (row == N) {
        possible ++;
        return;
    }

    for(int i = 0; i < N; i++) {
        arr[row] = i;
        if (condition(row)) dfs(N, row+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        arr.push_back(0);
    }
    dfs(N, 0);
    cout << possible << endl;

    return 0;
}