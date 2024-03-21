#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> waiting;
    int size;
    bool isNice = true;
    cin >> size;
    vector<int> waitingline(size);
    for(int i = 0; i < size; i++) 
        cin >> waitingline[i];
    int pointer = 0, callout = 1;
    while(pointer < size) {
        while(!waiting.empty() && waiting.top() == callout) {
            callout++;
            waiting.pop();
        }
        if (callout == waitingline[pointer])
            callout++;
        else 
            waiting.push(waitingline[pointer]);
        pointer++;
    }
    while(!waiting.empty() && isNice) {
        if (callout > waiting.top()) isNice = false;
        else {
            callout = waiting.top();
            waiting.pop();
        }
    }

    cout << (isNice ? "Nice" : "Sad") << '\n';

    return 0;
}