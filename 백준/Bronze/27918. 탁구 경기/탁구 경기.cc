#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, dal = 0, pho = 0;
    bool isWin = false;
    char winner;
    cin >> N;
    while (N-- && !isWin) {
        cin >> winner;
        if (winner == 'D') dal++;
        else if (winner == 'P') pho++;
        if (dal - pho >= 2 || pho - dal >= 2) isWin = true;
    }

    cout << dal << ":" << pho;

    return 0;
}