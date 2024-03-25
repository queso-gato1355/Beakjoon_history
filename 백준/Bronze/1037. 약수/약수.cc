#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 1, testNum, i = 0, min, cv = 1;
    bool flag = false;
    cin >> testNum;
    vector<int> deno(testNum);
    while(i < testNum)
        cin >> deno[i++];
    sort(deno.begin(), deno.end());
    if (testNum == 1) cout << deno[0] * deno[0] << '\n';
    else cout << deno.front() * deno.back() << '\n';
    return 0;
}