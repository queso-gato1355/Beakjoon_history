#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> infected;
    set<string> normal;
    string personA, personB;
    int N;
    cin >> N;
    infected.insert("ChongChong");
    while(N--) {
        cin >> personA >> personB;
        if (infected.count(personA)) {
            infected.insert(personB);
            if (normal.count(personB)) normal.erase(normal.find(personB));
        } else if (infected.count(personB)) {
            infected.insert(personA);
            if (normal.count(personA)) normal.erase(normal.find(personA));
        } else {
            normal.insert(personA);
            normal.insert(personB);
        }
    }
    cout << infected.size() << '\n';

    return 0;
}