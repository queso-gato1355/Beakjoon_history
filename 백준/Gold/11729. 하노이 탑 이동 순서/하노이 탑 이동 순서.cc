#include <iostream>
#include <vector>
using namespace std;

void moveOnePlate(int start, int to, vector<pair<int, int>>& movement) {
    movement.push_back(make_pair(start, to));
}

void hanoi(int plates, int start, int to, int via, vector<pair<int, int>>& movement) {
    if(plates == 1) moveOnePlate(start, to, movement); 
    else {
        hanoi(plates - 1, start, via, to, movement);
        moveOnePlate(start, to, movement);
        hanoi(plates - 1, via, to, start, movement);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numOfPlates;
    cin >> numOfPlates;
    vector<pair<int, int>> records;
    hanoi(numOfPlates, 1, 3, 2, records);
    cout << records.size() << '\n';
    for(pair<int, int> k : records)
        cout << k.first << " " << k.second << '\n';
    
    return 0;
}