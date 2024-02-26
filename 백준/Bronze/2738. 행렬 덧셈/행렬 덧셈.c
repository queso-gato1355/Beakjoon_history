#include <stdio.h>

int main() {
    int n = 0;
    int m = 0;
    int buf = 0;

    scanf("%d %d", &n, &m);

    int M[n][m];

    for(int o = 0; o < 2; o++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (o == 0)
                    scanf("%d", &M[i][j]);
                else
                    scanf("%d", &buf);
                    M[i][j] += buf;
            }
            getchar();
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }

    return 0;
}