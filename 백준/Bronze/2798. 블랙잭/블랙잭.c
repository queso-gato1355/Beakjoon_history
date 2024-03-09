#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int card_num, goal;
    scanf("%d %d", &card_num, &goal);
    int* cards = (int *)malloc(card_num * sizeof(int));

    for (int i = 0; i < card_num; i++)
        scanf("%d", &cards[i]);

    int min = INT_MAX, result = 0;
    //멍청하게 가보자
    for(int i = 0; i < card_num; i++) {
        for(int j = 0; j < card_num; j++) {
            if (i == j) continue;
            for(int k = 0; k < card_num; k++) {
                if (j == k || i == k) continue;
                result = goal - (cards[i] + cards[j] + cards[k]);
                if (result >= 0 && min > result) min = result;
            }
        }
    }
    free(cards);
    printf("%d", goal - min);
    return 0;
}