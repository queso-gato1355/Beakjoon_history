#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int minimal = INT_MAX, maximal = INT_MIN;
vector<int> numArray;
vector<int> arith(4);

void dfs(int depth, int sum) {
    if(depth == numArray.size()) {
        if (sum < minimal) minimal = sum;
        if (sum > maximal) maximal = sum;
        return;
    }
    if(depth == 0) {
        dfs(depth + 1, numArray[depth]);
    }

    for(int i = 0; i < 4; i++) {
        if (arith[i] > 0) {
            arith[i]--;
            switch (i) {
            case 0:
                dfs(depth + 1, sum + numArray[depth]);
                break;
            case 1:
                dfs(depth + 1, sum - numArray[depth]);
                break;
            case 2:
                dfs(depth + 1, sum * numArray[depth]);
                break;
            case 3:
                dfs(depth + 1, sum / numArray[depth]);
                break;
            default:
                break;
            }
            arith[i]++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, buffer;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        numArray.push_back(buffer);
    }
    cin >> arith[0] >> arith[1] >> arith[2] >> arith[3];
    dfs(0, 0);
    cout << maximal << '\n' << minimal;
    return 0;
}