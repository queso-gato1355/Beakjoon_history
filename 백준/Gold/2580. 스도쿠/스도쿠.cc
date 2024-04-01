#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> sudoku(9, vector<int>(9, 0));
bool reached = false;

void printSudoku() {
    for(int y = 0; y < 9; y++) {
        for(int x = 0; x < 9; x++)
            cout << sudoku[y][x] << " ";
        cout << '\n';
    }
}

// row check
bool ruleOne(int row, int check) {
    for(int k : sudoku[row])
        if (k == check) return false;
    return true;
}

// col check
bool ruleTwo(int col, int check) {
    for(int i = 0; i < 9; i++) 
        if(sudoku[i][col] == check) return false;
    return true;
}

// box check
bool ruleThree(int row, int col, int check) {
    int box_x = col / 3;
    int box_y = row / 3;
    for(int y = box_y * 3; y < box_y * 3 + 3; y++) {
        for(int x = box_x * 3; x < box_x * 3 + 3; x++) {
            if(sudoku[y][x] == check) return false;
        }
    }
    return true;
}

void sudokuSolver(const vector<pair<int, int>>& zero_list, int depth) {
    if (depth == zero_list.size()) {
        printSudoku();
        reached = true;
        return;
    }

    for(int i = 1; i <= 9; i++) {
        int row = zero_list[depth].second;
        int col = zero_list[depth].first;
        if(ruleOne(row, i) && ruleTwo(col, i) && ruleThree(row, col, i)) {
            sudoku[row][col] = i;
            sudokuSolver(zero_list, depth + 1);
            sudoku[row][col] = 0;
        }
        if (reached) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int, int>> zero_list;

    for(int y = 0; y < 9; y++) {
        for(int x = 0; x < 9; x++) {
            cin >> sudoku[y][x];
            if (sudoku[y][x] == 0)
                zero_list.push_back(make_pair(x, y));
        }
    }
    sudokuSolver(zero_list, 0);
    return 0;
}