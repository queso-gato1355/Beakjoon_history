#include <iostream>
#include <algorithm>
using namespace std;

int lcd(int a, int b) {
    int g = __gcd(a, b);
    return (a / g) * (b / g) * g;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << '\n' << lcd(a, b);

    
    return 0;
}