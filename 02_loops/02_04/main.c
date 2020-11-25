#include <stdio.h>

int main() {

    int sum = 0;
    do {

        int number = 0;
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &number);

        if (number % 2 != 0) {
            sum += number;
        }

        printf("Suma: %d\n", sum);
    }
    while(sum % 100 != 0);

    return 0;
}