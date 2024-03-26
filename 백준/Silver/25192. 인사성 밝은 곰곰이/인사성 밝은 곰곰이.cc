#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<string> name_list;
    int N, count = 0;
    string name;
    cin >> N;
    while(N--) {
        cin >> name;
        if(name == "ENTER") {
            count += name_list.size();
            name_list.clear();
        } else {
            name_list.insert(name);
        }
    }
    count += name_list.size();
    
    cout << count << '\n';

    return 0;
}