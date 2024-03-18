#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> findIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> intersection;

    vector<int> sortedArr1 = arr1;
    vector<int> sortedArr2 = arr2;
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
    vector<int> notHeard(N);
    vector<int> notSeen(M);
    int buffer;
    for(int i = 0; i < N; i++) {
        cin >> buffer;
        notHeard[i] = buffer;
    }
    for(int i = 0; i < M; i++) {
        cin >> buffer;
        notSeen[i] = buffer;
    }
    vector<int> whoAreYou = findIntersection(notHeard, notSeen);
    cout << notHeard.size() + notSeen.size() - 2 * whoAreYou.size() << '\n';

    return 0;
}