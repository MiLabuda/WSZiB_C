#include <stdio.h>

int main() {
    float sum = 0;

    do{
        float number;

        printf("\n\n\nWprowadź liczbę, wyświetlona zostanie suma liczb\n");
        scanf("%f", &number);
        sum += number;

        printf("Suma liczb to: %.2f", sum);
    }
    while(sum <= 350);
    printf("\nSuma liczb przekroczyła 350!\n");
}
