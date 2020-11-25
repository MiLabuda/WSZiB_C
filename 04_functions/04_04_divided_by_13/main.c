#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

long int random(void);
void printArray(void);

int arr[SIZE];

int main() {
    int outcome = 0;
    printf("Hello, World!\n");
    outcome = random();
    printArray();

    printf("\n\nSuma liczb podzielnych przez 13 wynosi: %d", outcome);

    return 0;
}

long int random(void){
    int randomNumber;
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        randomNumber = rand() % 100 - 50;
        arr[i] = randomNumber;
        if(arr[i] % 13 == 0){
            sum += arr[i];
        }
    }
    return sum;
}

void printArray(void){
    for(int i =0; i< SIZE; i++){
        printf("%d  ", arr[i]);
    }
}