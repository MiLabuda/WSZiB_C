#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

int arr[SIZE];

void printArray(void);
long int random(void);

int main() {
    printf("Hello, World!\n");
    random();
    printArray();
    return 0;
}

long int random(void){

    int randomNumber;
    int smallest;
    for(int i = 0; i < SIZE; i++){
        randomNumber = rand() % 100 - 50;
        arr[i] = randomNumber;
    }
    smallest = arr[0];

    for(int i = 0; i< SIZE; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("smallest number: %d\n\n", smallest);
}

void printArray(void){
    for(int i =0; i< SIZE; i++){
        printf("%d  ", arr[i]);
    }
}

