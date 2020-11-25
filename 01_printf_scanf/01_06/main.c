#include <stdio.h>

int main() {
    float a, b, c, d;
    printf("Wprowadź cztery liczby zmiennoprzecinkowe\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    float iloczyn = a*b*c*d;
    if((iloczyn<100)&(iloczyn!=0)){
        printf("Iloczyn podanych liczb to: %f", iloczyn);
    }

    float suma = a+b+c+d;
    if(suma>200){
        printf("Suma podanych liczb to: %f", suma);
    }

    if((a=0)||(b=0)||(c=0)||(d=0)){
        printf("Jedna z podanych liczb jest zerem");
    }
    if(!(((iloczyn<100)&(iloczyn!=0))&(suma>200)&((a=0)||(b=0)||(c=0)||(d=0)))){
        printf("\nBłędne dane");
    }
    return 0;
}
