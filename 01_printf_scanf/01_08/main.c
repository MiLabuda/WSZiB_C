#include <stdio.h>

int main() {

    int a;

    printf("Wprowadź liczbę!\n");
    scanf("%d", &a);

    int reszta=a%8;

    if(reszta!=0){
        printf("Reszta z dzielenia przez 8 to: %d", reszta);
    }

    else{
        printf("Liczba jest podzielna przez 8");
    }

    return 0;
}
