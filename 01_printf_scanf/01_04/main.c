#include <stdio.h>

int main() {
    char a;
    printf("Wprowadź znak:\n");
    scanf("%c", &a);

    if(a>= 48 && a <= 57){
        int c = a - '0';
        printf("Podany znak jest cyfrą %c a wynik mnożenia przez 12 to:%i\n", c, c*12);
    }
    else{
        printf("Podany znak nie jest cyfrą");
    }
    return 0;
}
