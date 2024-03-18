#include <iostream>
#include <string>

using namespace std;

bool isPalindromeNumber(string s) {
    int len = s.length();
    int lPoint = 0;
    int rPoint = len - 1;
    do {
        if (s[lPoint] != s[rPoint]) return false;
        lPoint++;
        rPoint--;
    } while (lPoint < rPoint);
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    while(true) {
        cin >> s;
        if (s == "0") break;
        if (isPalindromeNumber(s)) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }

    return 0;
}