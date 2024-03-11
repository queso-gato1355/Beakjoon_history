#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char word[51];
} String;

int compare(const void *a, const void *b) {
    const String *str1 = (const String *)a;
    const String *str2 = (const String *)b;

    if (strlen(str1->word) != strlen(str2->word))
        return strlen(str1->word) - strlen(str2->word);
    else
        return strcmp(str1->word, str2->word);
}

int main() {
    int N;
    scanf("%d", &N);

    String *words = (String *)malloc(N * sizeof(String));
    for (int i = 0; i < N; i++) {
        scanf("%s", words[i].word);
    }
    qsort(words, N, sizeof(String), compare);

    printf("%s\n", words[0].word);
    for (int i = 1; i < N; i++) {
        if (strcmp(words[i].word, words[i - 1].word) != 0) {
            printf("%s\n", words[i].word);
        }
    }

    free(words);
    return 0;
}