#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pow_table;
int start = 0, link = 0, minimal = 100;

void calculation(vector<int>& members) {
    vector<bool> is_start(pow_table.size(), false);
    for(int member: members)
        is_start[member] = true;
    start = 0, link = 0;
    for (int i = 0; i < pow_table.size(); i++) {
        for (int j = 0; j < pow_table.size(); j++) {
            if (is_start[i] && is_start[j]) {
                start += pow_table[i][j];
            } else if (!is_start[i] && !is_start[j]) {
                link += pow_table[i][j];
            }
        }
    }
    minimal = min(minimal, abs(start - link));
}

void dfs(int N, int depth, vector<int>& members) {
    if (depth == pow_table.size() / 2) {
        calculation(members);
        return;
    }
    int start_index = (members.empty() ? 0 : members.back() + 1);
    for(int i = start_index; i < N; i++) {
        members.push_back(i);
        dfs(N, depth + 1, members);
        members.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, buffer;
    cin >> N;
    for(int i = 0; i < N; i++) {
        vector<int> temp(N);
        for(int j = 0; j < N; j++) 
            cin >> temp[j];
        pow_table.push_back(temp);    
    }
    vector<int> members;
    dfs(N, 0, members);
    cout << minimal << endl;
    
    return 0;
}