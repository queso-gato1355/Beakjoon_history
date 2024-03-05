#include <stdio.h>
#include <stdlib.h>

int count_factor(int value) {
    int count = 0;
    for(int i = 1; i * i <= value; i++) {
        if (i * i == value) count++;
        else if (value % i == 0) count += 2;
    }
    return count;
}

void print_equ(int right, int* arr, size_t arr_size) {
    printf("%d = %d ", right, arr[0]);
    for(int i = 1; i < arr_size; i++)
        printf("+ %d ", arr[i]);
    printf("\n");
}

int sum(int* arr, size_t arr_size) {
    int result = 0;
    for(int i = 0; i < arr_size; i++)
        result += arr[i];
    return result;
}

int main() {
    int number;
    while(1) {
        scanf("%d", &number);
        if(number == -1) break;

        int arr_size = count_factor(number) - 1;
        int index = 0;
        int* arr = (int *)malloc(sizeof(int) * arr_size);

        for(int i = 1; i * i <= number; i++) {
            if (i * i == number) arr[(arr_size + 1) / 2 + 1] = i;
            else if (number % i == 0) {
                arr[index] = i;
                if (i != 1)
                    arr[arr_size - index] = number / i;
                index++;
            }
        }

        if (sum(arr, arr_size) == number)
            print_equ(number, arr, arr_size);
        else
            printf("%d is NOT perfect.\n", number);

        free(arr);
    }
    return 0;
}