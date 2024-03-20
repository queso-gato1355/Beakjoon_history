#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    int instruction_num, fun, arg;
    cin >> instruction_num;

    for(int i = 0; i < instruction_num; i++) {
        cin >> fun;
        if (fun == 1) cin >> arg;
        switch (fun) {
        case 1:
            s.push(arg);
            break;
        case 2:
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();
            }
            else cout << -1 << '\n';
            break;
        
        case 3:
            cout << s.size() << '\n';
            break;
        
        case 4:
            if (s.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
            break;
        
        case 5:
            if (!s.empty()) cout << s.top() << '\n';
            else cout << -1 << '\n';
            break;
        default:
            break;
        }
    }

    return 0;
}