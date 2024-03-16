#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // 이걸 넣어줘야 한다니...
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, string> pokemonDictionary1;
    map<string, int> pokemonDictionary2;
    int N, M;
    string name;
    cin >> N >> M;
    for(int i = 1; i < N + 1; i++) {
        cin >> name;
        pokemonDictionary1[i] = name;
        pokemonDictionary2[name] = i;
    }
    for(int i = 0; i < M; i++) {
        cin >> name;
        if(atoi(name.c_str())) cout << pokemonDictionary1[atoi(name.c_str())] << '\n';
        else cout << pokemonDictionary2[name] << '\n';
    }

    return 0;
}