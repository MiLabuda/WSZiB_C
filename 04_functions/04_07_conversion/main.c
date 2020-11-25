#include <stdio.h>
#define SIZE 10

int arr[SIZE];

int conversion(int number);

int main() {
    int n = 0;

    printf("Wprowadź liczbę dziesiętną całkowitą: ");
    scanf("%d", &n);
//    for(int i = 0; i < SIZE; i++){
//        arr[SIZE] = conversion(n);
//    }

    printf("\nPodana liczba w systemie 16-stkowym to: ");
    for(int i = sizeof(arr[])-1; i >= 0; --i){
        printf("%d  ", wynik);
    }
    return 0;
}

int conversion(int number){
    int r = 0;
    int i = 0;
    int counter = 0;

    while(number >= 16) {
        r = number % 16;
        number /= 16;
        arr[i] = r;
        i++;
    }
    arr[i] = number
    i++;

    for(int j = 0; )


    return arr[];
}
