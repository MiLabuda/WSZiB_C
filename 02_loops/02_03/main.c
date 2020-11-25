#include <stdio.h>

int main() {

    int sum = 0, number = 0;

    do {
        printf("Wczytaj liczbe calkowita, nieujemna:\n");
        scanf("%d", &number);

        if(number % 13 != 0){
            if (number >= 0) {
                sum += number;
            }
            else {
                printf("Liczba ujemna, pomijam...\n");
                continue;
            }

            printf("Suma: %d\n", sum);
        }
        else{
            printf("Liczba podzielna przez 13\n"); break;
        }

    }
    while(1);

    return 0;
}