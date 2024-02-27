#include <stdio.h>

void paste(int x, int y, int background[][100]) {
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            background[x + i][y + j] = 1;
}

int main() {
    int paper[100][100] = {0, };
    int color_paper = 0;
    int x, y;
    int count = 0;

    scanf("%d", &color_paper);

    for(int i = 0; i < color_paper; i++) {
        scanf("%d %d", &x, &y);
        paste(x, y, paper);
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) 
                count++;
        }    
    }
        
    printf("%d", count);
}