#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Wprowadź cztery liczby stałe\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    float iloczyn = a*b*c*d;
    if((iloczyn>50)&(iloczyn!=0)){
        printf("Iloczyn podanych liczb to: %d\n", iloczyn);
    }

    float suma = a+b+c+d;
    if(suma<=10){
        printf("Suma podanych liczb to: %f\n", suma);
    }

    if((a=b)||(a=c)||(a=d)||(b=c)||(b=d)||(c=d)){
        printf("Dwie z podanych liczb są identyczne\n");
    }
    if(!(((iloczyn>50)&(iloczyn!=0)||(suma<=10)||((a=b)||(a=c)||(a=d)||(b=c)||(b=d)||(c=d))))){
        printf("\nBłędne dane");
    }
    return 0;
}
