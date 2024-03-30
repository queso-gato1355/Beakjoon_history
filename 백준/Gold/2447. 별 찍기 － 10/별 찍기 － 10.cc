#include <iostream>
#include <vector>
using namespace std;

void recursionBox(char** rectangle, int x, int y, int width) {
    int third_size = width / 3;
    for(int b = y + third_size; b < y + 2*third_size; b++) {
        for(int a = x + third_size; a < x + 2*third_size; a++) {
            rectangle[b][a] = ' ';
        }
    }
    if(width > 3) {
        recursionBox(rectangle, x, y, width / 3);
        recursionBox(rectangle, x + third_size, y, width / 3);
        recursionBox(rectangle, x + 2*third_size, y, width / 3);
        recursionBox(rectangle, x, y + third_size, width / 3);
        recursionBox(rectangle, x + 2*third_size, y + third_size, width / 3);
        recursionBox(rectangle, x, y + 2*third_size, width / 3);
        recursionBox(rectangle, x + third_size, y + 2*third_size, width / 3);
        recursionBox(rectangle, x + 2*third_size, y + 2*third_size, width / 3);
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    char** square = new char*[N];
    for(int i = 0; i < N; i++)
        square[i] = new char[N];

    for(int y = 0; y < N; y++) {
        for(int x = 0; x < N; x++) {
            square[y][x] = '*';
        }
    }

    recursionBox(square, 0, 0, N);

    for(int y = 0; y < N; y++) {
        for(int x = 0; x < N; x++) {
            cout << square[y][x];
        }
        cout << '\n';
    }
    cout << flush;
    
    for(int i = 0; i < N; i++)
        delete[] square[i];
    delete[] square;

    return 0;
}