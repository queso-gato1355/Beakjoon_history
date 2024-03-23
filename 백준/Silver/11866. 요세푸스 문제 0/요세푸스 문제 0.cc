#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    queue<int> list;

    int N, eliminate;
    cin >> N >> eliminate;
    for(int i = 1; i <= N; i++)
        q.push(i);
    
    while(!q.empty()) {
        for(int i = 0; i < eliminate - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        list.push(q.front());
        q.pop();
    }

    cout << "<";
    for(int i = 0; i < N - 1; i++) {
        cout << list.front() << ", ";
        list.pop();
    }
    cout << list.front();
    cout << ">" << '\n';

    return 0;
}