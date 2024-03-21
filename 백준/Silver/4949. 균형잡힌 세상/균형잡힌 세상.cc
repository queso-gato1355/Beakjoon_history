#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> first;
    char paransChar[101];
    bool isRight;

    while(true) {
        isRight = true;
        while(!first.empty()) first.pop();
        cin.getline(paransChar, 101);
        string parans(paransChar);
        if(parans == ".") break;
        for(int i = 0; i < parans.length(); i++) {
            if (parans[i] == '(' || parans[i] == '[')
                first.push(parans[i]);
            else if (parans[i] == ')') {
                if (first.empty() || first.top() != '(') {
                    isRight = false;
                    break;
                }
                first.pop();
            } else if (parans[i] == ']') {
                if (first.empty() || first.top() != '[') {
                    isRight = false;
                    break;
                }
                first.pop();
            } else {
                continue;
            }
        }
        cout << (isRight && first.empty() ? "yes" : "no") << '\n';
    }
    

    return 0;
}