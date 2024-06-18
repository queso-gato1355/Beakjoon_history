#include <stdio.h>

#define MAX 21

int w(int a, int b, int c, int arr[MAX][MAX][MAX])
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }
    if (a > 20 || b > 20 || c > 20)
    {
        return w(20, 20, 20, arr);
    }
    if (arr[a][b][c] != 0)
    {
        return arr[a][b][c];
    }
    if (a < b && b < c)
    {
        arr[a][b][c] = w(a, b, c - 1, arr) + w(a, b - 1, c - 1, arr) - w(a, b - 1, c, arr);
        return arr[a][b][c];
    }
    arr[a][b][c] = w(a - 1, b, c, arr) + w(a - 1, b - 1, c, arr) + w(a - 1, b, c - 1, arr) - w(a - 1, b - 1, c - 1, arr);
    return arr[a][b][c];
}

int main()
{
    int arr[MAX][MAX][MAX] = {0}, a, b, c;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c, arr));
    }
    return 0;
}