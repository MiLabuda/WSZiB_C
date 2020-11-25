#include <stdio.h>

int main() {
    int a, b, c;
    printf("Wprowadź trzy liczby całkowite\n");
    printf("My uporządkujemy je dla Ciebie\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b){
        if(a>c){
            if(b>c){
                printf("%d\t%d\t%d\t", a, b, c);
            }
            else{
                printf("%d\t%d\t%d\t", a, c, b);
            }
        }
        else {
            printf("%d\t%d\t%d\t", c, a, b);
        }
    }
    else{
        if(b>c){
            if(a>c){
                printf("%d\t%d\t%d\t", b, a, c);
            }
            else if(a<c){
                printf("%d\t%d\t%d\t", b, c, a);
            }
        }
        else{
            printf("%d\t%d\t%d\t", c, b, a);
        }
    }

    return 0;
}
