#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> dq;
    int N, func, arg;
    cin >> N;
    while(N--) {
        cin >> func;
        switch (func)
        {
        case 1:
            cin >> arg;
            dq.push_front(arg);
            break;
        case 2:
            cin >> arg;
            dq.push_back(arg);
            break;
        case 3:
            if (dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            break;
        case 4:
            if (dq.empty()) cout << -1 << '\n';
            else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            break;
        case 5:
            cout << dq.size() << '\n';
            break;
        case 6:
            cout << (dq.empty() ? 1 : 0) << '\n';
            break;
        case 7:
            cout << (dq.empty() ? -1 : dq.front()) << '\n';
            break;
        case 8:
            cout << (dq.empty() ? -1 : dq.back()) << '\n';
            break;
        default:
            break;
        }
    }
    
    return 0;
}