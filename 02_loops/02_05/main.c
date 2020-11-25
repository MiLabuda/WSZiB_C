#include <stdio.h>

int main() {

    float product = 0;
    do {
        float number = 0;
        printf("Wprowadz liczbe zmiennoprzecinkowa dodatnia:\n");
        scanf("%f", &number);

        if (number <= 0) {
            printf("Liczba niedodatnia, pomijam...\n");
            continue;
        }

        if (product == 0) {
            product = number;
        } else {
            product *= number;
        }

        printf("Wczytano: %.2f \nIloczyn: %.2f\n", number, product);
    } while (product <= 500);

    return 0;
}