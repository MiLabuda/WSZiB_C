#include <stdio.h>
#define SIZE 10

void sort(int arr[]);

int main() {
    int arrSorted[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    sort(arrSorted);

    //Printing array elements
    printf("Nowa tablica\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", arrSorted[i]);
    }
}
//Sorting function
void sort(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        int max = SIZE;
        int temp = arr[i];
        arr[max - (i+1)] = arr[i];
        arr[i] = temp;
    }
}
