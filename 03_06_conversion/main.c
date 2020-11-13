#include <stdio.h>

int main() {
    int n = 0;
    int x = 0;
    int r;

    printf("Przelicznik na system binarny\nWprowadź liczbę całkowitą: \n");
    scanf("%d", &n);

    if (n < 2) {
        printf("\n%d\n", n);
    }

    while(n != 1 && n != 0) {
        r = n % 2;
        printf("%d ", r);
        n = n / 2;
        if(n < 2){
            printf("%d", n);
        }
    }

    printf("\n\nLiczba całkowita %d", x);
    printf("\nWynik dzielenia %d", n);


    return 0;
}
