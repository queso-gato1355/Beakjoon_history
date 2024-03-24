#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, func;
    cin >> N;
    deque<int> dq;
    int* papers = new int[N];

    for(int i = 1; i <= N; i++)
        dq.push_back(i);
    for(int i = 0; i < N; i++)
        cin >> papers[i];
    
    while(true) {
        func = papers[dq.front() - 1];
        cout << dq.front() << ' ';
        dq.pop_front();
        if(dq.empty()) break;
        if (func < 0) {
            while(func++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        } else {
            while(--func) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
    }

    delete[] papers;
    
    return 0;
}