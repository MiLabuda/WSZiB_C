#include <stdio.h>

int main(void) {
    int min;


    do{
        int number =0;

        printf("\nWprowadź liczbę całkowita [0 - Wyjście]:\n");
        scanf("%d", &number);

        if (number == 0) break;
        else {
            if(number <= min){
                min = number;
            }
            printf("Najmniejsza liczba to: %d", min);
        }
    }
    while(1);

    return 0;
}
