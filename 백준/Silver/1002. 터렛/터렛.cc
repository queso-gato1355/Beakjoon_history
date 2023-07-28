#include <iostream>
using namespace std;
int main() {
    int testNum, x1, y1, r1, x2, y2, r2, d, k1, k2;
    cin >> testNum;
    for(; testNum > 0; testNum = testNum - 1) {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2); k1 = (r1+r2)*(r1+r2); k2 = (r1-r2)*(r1-r2);
        if(d==0 && k2==0) cout << -1 << endl;
        else {
            if(d < k1 && d > k2) cout << 2 << endl;
            else if(d == k1 || d == k2) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}