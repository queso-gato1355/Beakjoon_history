#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[10];
    int friends[50];
    int next_month;
};

void list_initialize(struct node* list, size_t list_size) {
    memset(list, 0, sizeof(struct node) * list_size);
}

int indexList(const char* list[], size_t list_size, const char* name) {
    for (int i = 0; i < list_size; i++) {
        if (!strcmp(list[i], name)) return i;
    }
    return -1;
}

int gift_parameter(const struct node *person) {
    int parameter = 0;
    for (int i = 0; i < 50; i++) {
        parameter += person->friends[i];
    }
    return parameter;
}

void splitString(char *input, char **from, char **to) {
    char *token = strtok(input, " "); // 공백을 기준으로 문자열을 분리

    if (token != NULL) {
        *from = strdup(token); // 첫 번째 분리된 문자열을 from 변수에 저장
        token = strtok(NULL, " "); // 다음 문자열을 가져오기 위해 다시 호출

        if (token != NULL) {
            *to = strdup(token); // 두 번째 분리된 문자열을 to 변수에 저장
        } else {
            *to = ""; // 두 번째 문자열이 없는 경우 빈 문자열로 설정
        }
    } else {
        *from = ""; // 첫 번째 문자열이 없는 경우 빈 문자열로 설정
        *to = ""; // 두 번째 문자열도 없는 경우 빈 문자열로 설정
    }
}

// friends_len은 배열 friends의 길이입니다.
// gifts_len은 배열 gifts의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* friends[], size_t friends_len, const char* gifts[], size_t gifts_len) {
    int answer = 0;
    struct node people[friends_len];
    list_initialize(people, friends_len);
    
    for (int i = 0; i < gifts_len; i++) {
        char *from, *to;
        char input_string[21];
        strcpy(input_string, gifts[i]);
        splitString(input_string, &from, &to);
        int from_index = indexList(friends, friends_len, from);
        int to_index = indexList(friends, friends_len, to);
        
        if (strlen(people[from_index].name) == 0) strcpy(people[from_index].name, from);
        if (strlen(people[to_index].name) == 0) strcpy(people[to_index].name, to);
        people[from_index].friends[to_index]++;
        people[to_index].friends[from_index]--;
        free(from);
        free(to);
    }
    
    for (int i = 0; i < friends_len; i++) {
        for (int j = 0; j < friends_len; j++) {
            if (people[i].friends[j] > 0) people[i].next_month++;
            else if (people[i].friends[j] == 0 && i != j && gift_parameter(&people[j]) > gift_parameter(&people[i]))
                people[j].next_month++;
        }
    }
    
    for (int i = 0; i < friends_len; i++)
        if (people[i].next_month > answer) 
            answer = people[i].next_month;
    
    return answer;
}