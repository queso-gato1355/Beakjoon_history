#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    set<string> s;

    string name, state;

    for(int i = 0; i < N; i++) {
        cin >> name >> state;
        if (state == "enter") 
            s.insert(name);
        else if (state == "leave")
            if (s.count(name)) // 이 조건이 중요
                s.erase(name);
    }

    for(auto crew = s.rbegin(); crew != s.rend(); crew++)
        cout << *crew << '\n';

    return 0;
}