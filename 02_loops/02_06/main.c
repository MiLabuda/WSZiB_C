#include <stdio.h>

int main() {
    do{
        int number;
        printf("\nWprowadz liczbe [Jezeli bedzie podzielna przez 11 lub 13, program zakonczy prace\n");
        scanf("%d", &number);

        if(number%13 == 0 || number%11 ==0) break;
        else{
            printf("Podana liczba to: %d\n", number);
        }
    }
    while(1);
}
