#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        temp = arr[0];

    for(int i = 0; i < SIZE; i++){
        int max = SIZE - 1;

        arr[i] = arr[i + 1];
        if(i == max){
            arr[max] = temp;
        }
    }

    for(int i = 0; i < SIZE; i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}
