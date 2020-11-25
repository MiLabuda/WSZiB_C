#include <stdio.h>

int main() {
    char c;
    int a, b, d;

    printf("Jaki jest twój kierunek studiów:\n");
    scanf("%s", &c);
    printf("Który to rok twoich studiów:\n");
    scanf("%d", &d);

    printf("Wprowadź znaki, którymi chcesz wypełnić ramkę wizytówki:");
    scanf(" % c", &a);
    scanf(" % c", &b);

    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b);

    printf("Michał Łabuda\n");
    printf("Kierunek: %c\t", c);
    printf("Rok studiów: %d", d);

    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", b, b, b, b, b, b, b, b, b, b);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", b, b, b, b, b, b ,b, b ,b, b);

    return 0;
}
