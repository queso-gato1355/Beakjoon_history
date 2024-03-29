#include <iostream>
using namespace std;

int call_count = 0;

int recursion(const string& s, int l, int r) {
    call_count++;
    if (l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

bool isPalindrome(const string& s) {return recursion(s, 0, s.length() - 1);}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    while(N--) {
        string k;
        cin >> k;
        call_count = 0;
        bool isOne = isPalindrome(k);
        cout << (isOne ? 1 : 0) << " " << call_count << '\n';
    }

    return 0;
}