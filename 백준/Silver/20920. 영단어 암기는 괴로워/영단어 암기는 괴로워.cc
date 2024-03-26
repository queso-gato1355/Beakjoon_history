#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

// 단어, 빈도
bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        if (a.first.length() == b.first.length())
            return a.first < b.first;
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int word_n, letter_n;
    string word;
    cin >> word_n >> letter_n;
    // 입력
    vector<string> word_list;
    while(word_n--) {
        cin >> word;
        if (word.length() >= letter_n)
            word_list.push_back(word);
    }
    
    // 빈도 계산
    map<string, int> word_map;
    for(string w : word_list)
        word_map[w]++;
    
    // 벡터 변환
    vector<pair<string, int>> wordbook(word_map.begin(), word_map.end());

    sort(wordbook.begin(), wordbook.end(), compare);

    for(auto iter = wordbook.begin(); iter != wordbook.end(); iter++)
        cout << (*iter).first << '\n';

    return 0;
}