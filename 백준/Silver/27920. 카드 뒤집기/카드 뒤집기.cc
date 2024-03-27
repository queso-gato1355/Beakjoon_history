#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> list(N);
    int middle = N / 2;

    cout << "YES" << '\n';
    for(int i = 0; i < N; i++) {
        list[middle] = i + 1;
        if ((N+i)%2)// 홀수일 땐 오른쪽 이동
            middle += i + 1;
        else // 짝수일 땐 왼쪽 이동
            middle -= i + 1;
    }
    for(auto iter = list.begin(); iter != list.end(); iter++)
        cout << *iter << " ";
    cout << "\n";
    middle = N / 2;
    for(int i = 0; i < N; i++) {
        cout << middle + 1 << " ";
        if ((N+i)%2)// 홀수일 땐 오른쪽 이동
            middle += i + 1;
        else // 짝수일 땐 왼쪽 이동
            middle -= i + 1;
    }
    cout << "\n";

    return 0;
}