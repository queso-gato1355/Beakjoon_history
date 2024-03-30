#include <iostream>
using namespace std;

void cantor(char* base, int left, int right) {
    int size = right - left + 1;
    if (size <= 1) return;
    int third_size = size / 3;
    // change characters to blank.
    for(int i = third_size + left; i < left + 2*third_size; i++)
        base[i] = ' ';
    cantor(base, left, left + third_size - 1); // left side
    cantor(base, left + 2*third_size, right); // right side
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, len;
    while(cin >> N) {
        len = 1;
        for(int i = 0; i < N; i++)
            len *= 3;
        char* test = new char[len];
        fill_n(test, len, '-');
        cantor(test, 0, len - 1);
        for(int i = 0; i < len; i++)
            cout << test[i];
        cout << '\n' << flush;
        delete[] test;
    }
    return 0;
}