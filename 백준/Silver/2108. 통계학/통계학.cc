#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <set>
using namespace std;

int average(const vector<int>& list) {
    int size = list.size();
    int sumation = 0;
    for(auto iter = list.begin(); iter != list.end(); iter++)
        sumation += *iter;
    return (int) floor((float) sumation / (float) size + 0.5);
}

int middle(const vector<int>& list) {
    int size = list.size();
    if (size % 2 == 0)
        return (list[size / 2 - 1] + list[size / 2]) / 2;
    else
        return list[size / 2];
}

int frequent_compare(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

// 최빈값이 여러개라면 두 번째로 작은 값을 반환
int frequent(const vector<int>& list) {
    if (list.size() == 1) return list[0];
    map<int, int> frequent_map;
    for(int k: list)
        frequent_map[k]++;
    vector<pair<int, int>> v_map(frequent_map.begin(), frequent_map.end());
    sort(v_map.begin(), v_map.end(), frequent_compare);
    if (v_map.size() == 1) return v_map[0].first;
    if (v_map[0].second == v_map[1].second) return v_map[1].first;
    return v_map[0].first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> numlist(N);
    while(N--)
        cin >> numlist[N];
    sort(numlist.begin(), numlist.end());

    cout << average(numlist) << '\n';
    cout << middle(numlist) << '\n';
    cout << frequent(numlist) << '\n';
    cout << numlist.back() - numlist.front() << '\n';

    return 0;
}