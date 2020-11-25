#include <stdio.h>
#define SIZE 10

int main() {
    int arr[SIZE] = {15, 45, 55, 580, 155, 13, 23, 63, 93, 123},
        sum = 0,
        count = 0;

    for(int i = 0; i < SIZE; i++){
        if(arr[i] %15 == 0){
            sum += arr[i];
            count++;
        }
    }
    printf("Średnia elementów podzielnych przez 15 wynosi: %d\n", sum/count);
    return 0;
}
