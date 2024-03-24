#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, argN, arg, buffer, index = 0;
    bool s;
    cin >> N;
    vector<bool> qs_list(N);
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        qs_list[i] = buffer == 1 ? true : false;
    }
    deque<int> content;
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        if (!qs_list[i])
            content.push_back(buffer);
    }
    cin >> argN;
    while(argN--) {
        cin >> arg;
        content.push_front(arg);
        cout << content.back() << ' ';
        content.pop_back();
    }

    return 0;
}