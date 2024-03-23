#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;

    int N, arg;
    string k;
    cin >> N;
    while(N--) {
        cin >> k;
        if (k == "push") {
            cin >> arg;
            q.push(arg);
        } else if (k == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else if (k == "size") {
            cout << q.size() << '\n';
        } else if (k == "empty") {
            cout << (q.empty() ? "1" : "0") << '\n';
        } else if (k == "front") {
            cout << (q.empty() ? -1 : q.front()) << '\n';
        } else if (k == "back") {
            cout << (q.empty() ? -1 : q.back()) << '\n';
        }
    }

    return 0;
}