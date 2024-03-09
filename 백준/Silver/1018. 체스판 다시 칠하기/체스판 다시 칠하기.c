#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CHASE_PLATE_SIZE 64

// 잘못된 체커보드 색깔을 찾는다.
int check_fault(char** plate, char* answer, int x, int y) {
    int cost = 0;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++) 
            if (answer[i + 8*j] != plate[x + i][y + j]) cost++;

    return cost;

}

int check_plate(char** plate, int row, int col) {
    char* Wanswer = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
    char* Banswer = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
    int minimal_cost = INT_MAX, Wcost, Bcost;
    for(int i = 0; i < row - 7; i++) {
        for(int j = 0; j < col - 7; j++) {
            Wcost = check_fault(plate, Wanswer, i, j);
            Bcost = check_fault(plate, Banswer, i, j);
            int current_cost = (Wcost <= Bcost) ? Wcost : Bcost;
            minimal_cost = minimal_cost > current_cost ? current_cost : minimal_cost;
        }
    }
    return minimal_cost;
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    char** plate = (char **)malloc(row * sizeof(char *));
    for(int i = 0; i < row; i++) plate[i] = (char *)malloc(col * sizeof(char));
    for (int x = 0; x < row; x++)
        for (int y = 0; y < col; y++)
            scanf(" %c", &plate[x][y]);
    printf("%d", check_plate(plate, row, col));

    for(int i = 0; i < row; i++) free(plate[i]);
    free(plate);
    return 0;
}