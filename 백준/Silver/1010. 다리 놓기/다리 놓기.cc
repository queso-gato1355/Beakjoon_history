#include <iostream>
using namespace std;

// 오버플로우 방지
int numCombi(int n, int r) {
    if (n == r) return 1;
    int result = 1;
    for(int i = 1; i <= r; i++) { 
        result *= n - i + 1;
        result /= i; // 식을 합치면 소수점 날아감
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testNum;
    cin >> testNum;
    while(testNum--) {
        int N, R;
        cin >> R >> N;
        cout << numCombi(N, R) << '\n';
    }

    return 0;
}