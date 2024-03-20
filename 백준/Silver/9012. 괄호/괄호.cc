#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> s;

    int instruction_num;
    string parans;
    bool flag;
    cin >> instruction_num;

    for(int i = 0; i < instruction_num; i++) {
        flag = false;
        while(!s.empty()) s.pop();
        cin >> parans;
        if (parans.length() % 2 != 0 || parans.front() == ')' || parans.back() == '(') {
            cout << "NO" << '\n';
            continue;
        }
        for(int j = 0; j < parans.length(); j++) {
            if (parans[j] == '(') s.push('(');
            else {
                if (s.empty()) {
                    flag = true;
                    break;
                }
                s.pop();
            }
        }
        cout << (s.empty() && !flag ? "YES" : "NO") << '\n';
    }

    return 0;
}