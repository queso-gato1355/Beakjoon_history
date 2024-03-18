#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> findIntersection(const vector<string>& arr1, const vector<string>& arr2) {
    vector<string> intersection;

    vector<string> sortedArr1 = arr1;
    vector<string> sortedArr2 = arr2;
    sort(sortedArr1.begin(), sortedArr1.end());
    sort(sortedArr2.begin(), sortedArr2.end());

    // 교집합 찾기
    set_intersection(sortedArr1.begin(), sortedArr1.end(), sortedArr2.begin(), sortedArr2.end(), back_inserter(intersection));

    intersection.erase(unique(intersection.begin(), intersection.end()), intersection.end());

    return intersection;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<string> notHeard(N);
    vector<string> notSeen(M);
    string buffer;
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        notHeard[i] = buffer;
    }
    for(int i = 0; i < M; i++) {
        cin >> buffer;
        notSeen[i] = buffer;
    }
    vector<string> whoAreYou = findIntersection(notHeard, notSeen);
    cout << whoAreYou.size() << '\n';
    for (auto iter = whoAreYou.begin(); iter != whoAreYou.end(); iter++) {
        cout << *iter << '\n';
    }

    return 0;
}