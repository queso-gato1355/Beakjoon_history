#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, dal = 0, pho = 0, uni = 0, giveup = 0;
    bool isWin = false;
    string vote;
    cin >> vote;
    if (vote.size() == 0) {
        cout << "C";
        return 0;
    }
    for(int i = 0; i < vote.size(); i++) {
        if(vote[i] == 'U') uni++;
        else if(vote[i] == 'C') giveup++;
        else if(vote[i] == 'P') pho++;
        else if(vote[i] == 'D') dal++;
    }

    bool isUni = false, isPhoDal = false;
    if (uni + giveup > (pho + dal) / 2 + (pho + dal) % 2) isUni = true;
    if (pho != 0 || dal != 0) isPhoDal = true;

    if (isUni) cout << "U";
    if (isPhoDal) cout << "DP";

    return 0;
}