#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void printArray(void);
long int random(void);
void productOfNonPositive();


int arr[SIZE];

int main() {
    printf("Hello, World!\n");
    random();
    printArray();
    productOfNonPositive();

    return 0;
}

long int random(void){
    int randomNumber;
    for(int i = 0; i < SIZE; i++){
        randomNumber = rand() % 200 - 100;
        arr[i] = randomNumber;
    }
}
void productOfNonPositive(){
    int product = 0;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] % 2 == 1 && arr[i] > 0){
            if (product == 0) {
                product = arr[i];
            } else {
                product *= arr[i];
            }
        }
    }
    printf("\n\nIloczyn liczb nieparzystych dodatnich wynosi: %d", product);
}

void printArray(void){
    for(int i =0; i< SIZE; i++){
        printf("%d  ", arr[i]);
    }
}
