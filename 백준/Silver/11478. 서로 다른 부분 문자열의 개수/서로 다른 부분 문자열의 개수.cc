#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string buffer;
    cin >> buffer;
    int pointer;
    set<string> s;
    for(int i = 1; i <= buffer.length(); i++) {
        pointer = 0;
        while (pointer + i <= buffer.length()) {
            s.insert(buffer.substr(pointer, i));
            pointer++;
        }
    }
    cout << s.size() << '\n';

    return 0;
}