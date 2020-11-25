#include <stdio.h>

int arr[];

int conversion(int number);

int main() {
    int n = 0;
    int wynik[];


    printf("Wprowadź liczbę dziesiętną całkowitą: ");
    scanf("%d", &n);
    for(int i = 0; )
    wynik = conversion(n);

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

    while(1) {
        if (number < 16) {
            arr[i] = number;
            counter++;
            break;
        } else {
            r = number % 16;
            number /= 16;
            arr[i] = r;
            counter++;
        }
        i++;
    }
    return arr[counter];
}
